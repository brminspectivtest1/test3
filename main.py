import sys

def main():
    print("Dummy Application\n")
    for i, v in enumerate(sys.argv):
        print(f"Argument {i}: {v}")
    print("\n\nHave a nice day!")

if __name__ == "__main__":
    sys.exit(main())
