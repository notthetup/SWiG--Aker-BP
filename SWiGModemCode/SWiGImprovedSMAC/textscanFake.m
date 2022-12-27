function argsCell = textscanFake(string, ~, ~, delimiters)
args={};
running = true;
b=string;
while running
    [a,b]=strtok(b,delimiters); %#ok<STTOK> 
    if ~isempty(a)
        args=[args;a]; %#ok<AGROW> 
    end
    if isempty(b)
        running = false;
    end
end
argsCell={args};
