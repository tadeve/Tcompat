use helper_fns;
use std::collections::HashMap;
use std::io::Write;
pub fn euler_1(limit: usize, ex1: usize, ex2: usize) -> usize {
    helper_fns::arith_series_sum(0, limit, ex1) + helper_fns::arith_series_sum(0, limit, ex2) -
    helper_fns::arith_series_sum(0, limit, ex1 * ex2)
}
pub fn euler_2(limit: usize, even: bool) -> usize {
    let mut fibos: Vec<usize> = vec![1, 2];
    let mut sum = 2_usize;
    let mut fib_n = 2_usize;
    let mut next_fib = 2_usize;
    while next_fib < limit {
        next_fib = helper_fns::get_next_fib(fib_n, &mut fibos);
        sum += if (next_fib % 2 == 0 && even) || (next_fib % 2 != 0 && !even) {
            next_fib
        } else {
            0
        };
        fib_n += 1;
        fibos.push(next_fib);
    }
    sum
}
pub fn euler_3(num: u64) -> usize {
    let mut primes: Vec<usize> = Vec::new();
    let mut max_factor: usize = 1;
    helper_fns::generate_primes(&mut primes, 100000);
    for i in primes.iter() {
        if num % (*i as u64) == 0 {
            max_factor = if *i > max_factor {
                *i
            } else {
                max_factor
            };
        }
    }
    max_factor
}
pub fn euler_4() -> u64 {
    let mut buffer: Vec<u8> = Vec::new();
    let mut max: u64 = 0;
    for num1 in 100..1000 {
        for num2 in num1..1000 {
            write!(&mut buffer, "{}", num1 * num2).unwrap();
            if helper_fns::is_palindrom(&buffer) {
                max = if (num1 * num2) > max {
                    num1 * num2 as u64
                } else {
                    max
                };
            }
            buffer.clear(); // write! appends to the buffer
        }
    }
    max
}
pub fn euler_5() -> usize {
    let primes: Vec<usize> = vec![2, 3, 5, 7, 11, 13, 17, 19];
    let mut primes_freq: HashMap<usize, usize> = HashMap::new();
    for pr in primes.iter() {
        primes_freq.insert(*pr, 0);
    }
    for i in 1..21 {
        let freq = helper_fns::prime_factorize(i, &primes);
        for (pr, fr) in primes_freq.iter_mut() {
            let val = freq.get(pr);
            match val {
                Some(v) => {
                    if *fr < *v {
                        *fr = *v;
                    }
                }
                None => continue,
            }
        }
    }
    let mut pro: usize = 1;
    for (prime, value) in primes_freq.iter() {
        for _ in 0..*value {
            pro *= *prime;
        }
    }
    pro
}
pub fn euler_6(n: usize) -> usize {
    let sum_of_squres = helper_fns::squares_sum(n);
    let sum = helper_fns::arith_series_sum(0, n + 1, 1);
    // n+1 because arith_series_sum is non-inclusive
    let square_of_sum = sum * sum;
    square_of_sum - sum_of_squres
}
pub fn euler_7(n: usize) -> usize {
    let mut primes: Vec<usize> = Vec::new();
    helper_fns::generate_primes(&mut primes, n * 100);
    primes[n - 1]
}
pub fn euler_8() -> usize {
    let num: Vec<u8> =
        vec![7, 3, 1, 6, 7, 1, 7, 6, 5, 3, 1, 3, 3, 0, 6, 2, 4, 9, 1, 9, 2, 2, 5, 1, 1, 9, 6, 7,
             4, 4, 2, 6, 5, 7, 4, 7, 4, 2, 3, 5, 5, 3, 4, 9, 1, 9, 4, 9, 3, 4, 9, 6, 9, 8, 3, 5,
             2, 0, 3, 1, 2, 7, 7, 4, 5, 0, 6, 3, 2, 6, 2, 3, 9, 5, 7, 8, 3, 1, 8, 0, 1, 6, 9, 8,
             4, 8, 0, 1, 8, 6, 9, 4, 7, 8, 8, 5, 1, 8, 4, 3, 8, 5, 8, 6, 1, 5, 6, 0, 7, 8, 9, 1,
             1, 2, 9, 4, 9, 4, 9, 5, 4, 5, 9, 5, 0, 1, 7, 3, 7, 9, 5, 8, 3, 3, 1, 9, 5, 2, 8, 5,
             3, 2, 0, 8, 8, 0, 5, 5, 1, 1, 1, 2, 5, 4, 0, 6, 9, 8, 7, 4, 7, 1, 5, 8, 5, 2, 3, 8,
             6, 3, 0, 5, 0, 7, 1, 5, 6, 9, 3, 2, 9, 0, 9, 6, 3, 2, 9, 5, 2, 2, 7, 4, 4, 3, 0, 4,
             3, 5, 5, 7, 6, 6, 8, 9, 6, 6, 4, 8, 9, 5, 0, 4, 4, 5, 2, 4, 4, 5, 2, 3, 1, 6, 1, 7,
             3, 1, 8, 5, 6, 4, 0, 3, 0, 9, 8, 7, 1, 1, 1, 2, 1, 7, 2, 2, 3, 8, 3, 1, 1, 3, 6, 2,
             2, 2, 9, 8, 9, 3, 4, 2, 3, 3, 8, 0, 3, 0, 8, 1, 3, 5, 3, 3, 6, 2, 7, 6, 6, 1, 4, 2,
             8, 2, 8, 0, 6, 4, 4, 4, 4, 8, 6, 6, 4, 5, 2, 3, 8, 7, 4, 9, 3, 0, 3, 5, 8, 9, 0, 7,
             2, 9, 6, 2, 9, 0, 4, 9, 1, 5, 6, 0, 4, 4, 0, 7, 7, 2, 3, 9, 0, 7, 1, 3, 8, 1, 0, 5,
             1, 5, 8, 5, 9, 3, 0, 7, 9, 6, 0, 8, 6, 6, 7, 0, 1, 7, 2, 4, 2, 7, 1, 2, 1, 8, 8, 3,
             9, 9, 8, 7, 9, 7, 9, 0, 8, 7, 9, 2, 2, 7, 4, 9, 2, 1, 9, 0, 1, 6, 9, 9, 7, 2, 0, 8,
             8, 8, 0, 9, 3, 7, 7, 6, 6, 5, 7, 2, 7, 3, 3, 3, 0, 0, 1, 0, 5, 3, 3, 6, 7, 8, 8, 1,
             2, 2, 0, 2, 3, 5, 4, 2, 1, 8, 0, 9, 7, 5, 1, 2, 5, 4, 5, 4, 0, 5, 9, 4, 7, 5, 2, 2,
             4, 3, 5, 2, 5, 8, 4, 9, 0, 7, 7, 1, 1, 6, 7, 0, 5, 5, 6, 0, 1, 3, 6, 0, 4, 8, 3, 9,
             5, 8, 6, 4, 4, 6, 7, 0, 6, 3, 2, 4, 4, 1, 5, 7, 2, 2, 1, 5, 5, 3, 9, 7, 5, 3, 6, 9,
             7, 8, 1, 7, 9, 7, 7, 8, 4, 6, 1, 7, 4, 0, 6, 4, 9, 5, 5, 1, 4, 9, 2, 9, 0, 8, 6, 2,
             5, 6, 9, 3, 2, 1, 9, 7, 8, 4, 6, 8, 6, 2, 2, 4, 8, 2, 8, 3, 9, 7, 2, 2, 4, 1, 3, 7,
             5, 6, 5, 7, 0, 5, 6, 0, 5, 7, 4, 9, 0, 2, 6, 1, 4, 0, 7, 9, 7, 2, 9, 6, 8, 6, 5, 2,
             4, 1, 4, 5, 3, 5, 1, 0, 0, 4, 7, 4, 8, 2, 1, 6, 6, 3, 7, 0, 4, 8, 4, 4, 0, 3, 1, 9,
             9, 8, 9, 0, 0, 0, 8, 8, 9, 5, 2, 4, 3, 4, 5, 0, 6, 5, 8, 5, 4, 1, 2, 2, 7, 5, 8, 8,
             6, 6, 6, 8, 8, 1, 1, 6, 4, 2, 7, 1, 7, 1, 4, 7, 9, 9, 2, 4, 4, 4, 2, 9, 2, 8, 2, 3,
             0, 8, 6, 3, 4, 6, 5, 6, 7, 4, 8, 1, 3, 9, 1, 9, 1, 2, 3, 1, 6, 2, 8, 2, 4, 5, 8, 6,
             1, 7, 8, 6, 6, 4, 5, 8, 3, 5, 9, 1, 2, 4, 5, 6, 6, 5, 2, 9, 4, 7, 6, 5, 4, 5, 6, 8,
             2, 8, 4, 8, 9, 1, 2, 8, 8, 3, 1, 4, 2, 6, 0, 7, 6, 9, 0, 0, 4, 2, 2, 4, 2, 1, 9, 0,
             2, 2, 6, 7, 1, 0, 5, 5, 6, 2, 6, 3, 2, 1, 1, 1, 1, 1, 0, 9, 3, 7, 0, 5, 4, 4, 2, 1,
             7, 5, 0, 6, 9, 4, 1, 6, 5, 8, 9, 6, 0, 4, 0, 8, 0, 7, 1, 9, 8, 4, 0, 3, 8, 5, 0, 9,
             6, 2, 4, 5, 5, 4, 4, 4, 3, 6, 2, 9, 8, 1, 2, 3, 0, 9, 8, 7, 8, 7, 9, 9, 2, 7, 2, 4,
             4, 2, 8, 4, 9, 0, 9, 1, 8, 8, 8, 4, 5, 8, 0, 1, 5, 6, 1, 6, 6, 0, 9, 7, 9, 1, 9, 1,
             3, 3, 8, 7, 5, 4, 9, 9, 2, 0, 0, 5, 2, 4, 0, 6, 3, 6, 8, 9, 9, 1, 2, 5, 6, 0, 7, 1,
             7, 6, 0, 6, 0, 5, 8, 8, 6, 1, 1, 6, 4, 6, 7, 1, 0, 9, 4, 0, 5, 0, 7, 7, 5, 4, 1, 0,
             0, 2, 2, 5, 6, 9, 8, 3, 1, 5, 5, 2, 0, 0, 0, 5, 5, 9, 3, 5, 7, 2, 9, 7, 2, 5, 7, 1,
             6, 3, 6, 2, 6, 9, 5, 6, 1, 8, 8, 2, 6, 7, 0, 4, 2, 8, 2, 5, 2, 4, 8, 3, 6, 0, 0, 8,
             2, 3, 2, 5, 7, 5, 3, 0, 4, 2, 0, 7, 5, 2, 9, 6, 3, 4, 5, 0];
    let mut prod = 1;
    let mut max_prod = 0;
    for i in 0..(1000 - 13) {
        for j in i..i + 13 {
            prod *= num[j] as usize;
        }
        max_prod = if prod > max_prod {
            prod
        } else {
            max_prod
        };
        prod = 1;
    }
    max_prod
}
pub fn euler_9() -> isize {
    let a = |b: isize, c: isize| 1000 - b - c;
    let c = |b: isize| -> isize {
        let u = (-2 * (b * b)) + (2000 * b) - (1000000);
        let v = (2 * b) - 2000;
        if u % v == 0 {
            u / v
        } else {
            0
        }
    };
    for b in 1..1000 {
        if (c(b) + b + a(b, c(b))) == 1000 {
            if c(b) != 0 {
                return c(b) * b * a(b, c(b));
            }
        }
    }
    return 0;
}
pub fn euler_10(upper_limit: usize) -> usize {
    let mut primes: Vec<usize> = Vec::new();
    let mut sum: usize = 0;
    helper_fns::generate_primes(&mut primes, upper_limit);
    for prime in primes.iter() {
        sum += *prime;
    }
    sum
}
