fn main() {
    println!("Dummy Application");

    for (index, value) in std::env::args().enumerate() {
        println!("Argument {:?}: {:?}", index, value);
    }

    println!("\nHave a nice day!");
}
