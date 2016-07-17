use std::collections::HashMap;
pub fn arith_series_sum(lower_limit: usize, upper_limit: usize, step: usize) -> usize {
    let first_element = lower_limit + (step - (lower_limit % step));
    let last_element = (upper_limit - 1) - ((upper_limit - 1) % step);
    let number_of_elements = ((last_element - first_element) / step) + 1;
    number_of_elements * (first_element + last_element) / 2
}
pub fn get_next_fib(fib_n: usize, fibos: &mut Vec<usize>) -> usize {
    fibos[fib_n - 1] + fibos[fib_n - 2]
}
pub fn generate_primes(primes: &mut Vec<usize>, n: usize) {
    let mut p = vec![true;n];
    p[0] = false;
    p[1] = false;
    for i in 2..n {
        let mut j = i * i;
        while j < n {
            p[j] = false;
            j += i;
        }
    }
    for (i, v) in p.iter().enumerate() {
        if *v {
            primes.push(i);
        }
    }
}
pub fn is_palindrom(st: &Vec<u8>) -> bool {
    let len = st.len();
    for v in 0..len / 2 {
        if st[v] != st[len - v - 1] {
            return false;
        }
    }
    return true;
}
pub fn prime_factorize(temp: usize, primes: &Vec<usize>) -> HashMap<usize, usize> {
    let mut n = temp;
    let mut freq: HashMap<usize, usize> = HashMap::new();
    for i in primes.iter() {
        if (*i) * (*i) > temp {
            break;
        }
        if n % *i == 0 {
            let mut f = 0_usize;
            while n % *i == 0 {
                freq.insert(*i, f);
                f += 1;
                n /= *i;
            }
            freq.insert(*i, f);
        }
    }
    freq
}
pub fn squares_sum(n: usize) -> usize {
    n * (n + 1) * (2 * n + 1) / 6
}
pub fn number_of_divisors(n: usize, primes: &Vec<usize>) -> usize {
    let prime_factors = prime_factorize(n, &primes);
    let mut nof = 1;
    for (_, value) in prime_factors.iter() {
        nof *= (*value) + 1;
    }
    nof
}
