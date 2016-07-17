mod helper_fns;
mod euler_vol1;
mod euler_vol2;
fn main() {
    println!("Euler 1 : {}", euler_vol1::euler_1(1000, 3, 5));
    println!("Euler 2 : {}", euler_vol1::euler_2(4000000, true));
    println!("Euler 3 : {}", euler_vol1::euler_3(600851475143));
    println!("Euler 4 : {}", euler_vol1::euler_4());
    println!("Euler 5 : {}", euler_vol1::euler_5());
    println!("Euler 6 : {}", euler_vol1::euler_6(100));
    println!("Euler 7 : {}", euler_vol1::euler_7(10001));
    println!("Euler 8 : {}", euler_vol1::euler_8());
    println!("Euler 9 : {}", euler_vol1::euler_9());
    println!("Euler 10 : {}", euler_vol1::euler_10(2000000));
    println!("Euler 11 : {}", euler_vol2::euler_11());
    println!("Euler 12 : {}", euler_vol2::euler_12());
    println!("Euler 13 : {}", euler_vol2::euler_13());
    println!("Euler 14 : {}", euler_vol2::euler_14());
    println!("Euler 15 : {}", euler_vol2::euler_15());
    // println!("Euler 16 : {}", euler_vol2::euler_16());

}
