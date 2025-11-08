# Tower of Hanoi using Recursion

def tower_of_hanoi(n, source, auxiliary, destination):
    if n == 1:
        print(f"Move disk 1 from {source} → {destination}")
        return

    # Move top n-1 disks from source to auxiliary
    tower_of_hanoi(n - 1, source, destination, auxiliary)

    # Move remaining disk from source to destination
    print(f"Move disk {n} from {source} → {destination}")

    # Move the n-1 disks from auxiliary to destination
    tower_of_hanoi(n - 1, auxiliary, source, destination)


# Main program
n = int(input("Enter number of disks: "))
print(f"\nSteps to solve Tower of Hanoi for {n} disks:\n")
tower_of_hanoi(n, 'A', 'B', 'C')

print(f"\nTotal moves required: {2 ** n - 1}")
