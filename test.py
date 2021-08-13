import cv2

size = 60

k = cv2.imread("./k.png")
k = cv2.resize(k, (size,size))

code = "pixels = ["

for row in range(size):
    code+="["

    for col in range(size):
        r = format(k[row,col,0], 'X')
        g = format(k[row, col, 1], 'X')
        b = format(k[row, col, 2], 'X')
        code += f"'#{b}{g}{r}',"
        
    code+="],"


code += "]"

with open("code.py", "w") as text_file:
    text_file.write(code)


