// matrix multiplication of two random matrices 1000x1000 ten times using Rust
// print the mean time it took to compute the result

use std::time::{Duration, Instant};

// import rand crate
extern crate rand;

const N: usize = 1000;

fn main() {

    let mut a = vec![0.0; N * N];
    let mut b = vec![0.0; N * N];
    let mut c = vec![0.0; N * N];

    // initialize a and b with random values
    for i in 0..(N*N) {
        a[i] = rand::random::<f64>();
        b[i] = rand::random::<f64>();
    }

    let mut mean_time = Duration::new(0, 0);

    for _ in 0..10 {
        let start = Instant::now();
        for j in 0..N {
            for k in 0..N {
                for i in 0..N {
                    c[j*N+k] += a[j*N+i] * b[i*N+k];
                }
            }
        }
        let end = Instant::now();
        mean_time += end.duration_since(start);
        // reset c to zero for the next iteration
        c.iter_mut().for_each(|x| *x = 0.0);
    }

    let mean_time_secs = mean_time.as_secs_f64() / 10.0;
    println!("Mean time: {:.6} seconds for 10 matrix multiplications of 1000x1000 arrays (Rust)", mean_time_secs);

}


