def get_int (prompt):
# keep prompting the user for  input until thr positive integer is entered
    while True:
        try:
            # Convert the user input to a integer
            return int(input(prompt))
        except ValueError:
            print("Invalid input, Please input a positive integer,")


height = get_int("Write the height? ")

while height < 1 or height > 8:
    print("Height must be between 1 and 8")
    height = get_int ("Height: ")

for i in range(1, height +1):
    print(" " * (height - i) + "#" * i)