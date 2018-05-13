-- Comentarios
--[[
 Lua supports the following bitwise operators:

    &: bitwise AND
    |: bitwise OR
    ~: bitwise exclusive OR
    >>: right shift
    <<: left shift
    ~: unary bitwise NOT

]]


varA = 1
varB = 0

io.write("Digite uma operação: ")
op = io.read()
print(assert((op == "&") or (op == "|") or (op == "~") or (op == ">>") or (op == "<<")))



