# mpi-debug
test-mpi-debug


```bash
mpicc -o hello_world hello_world.c
salloc -N2 -n2 -c2 -Jhello_world -t0:02:00
```

`srun ./hello_world`
```bash
Hello, World! I am process 0 out of 1
Hello, World! I am process 0 out of 1
```


`mpirun ./hello_world`

```bash
--------------------------------------------------------------------------
PMIx was unable to find a usable compression library
on the system. We will therefore be unable to compress
large data streams. This may result in longer-than-normal
startup times and larger memory footprints. We will
continue, but strongly recommend installing zlib or
a comparable compression library for better user experience.

You can suppress this warning by adding "pcompress_base_silence_warning=1"
to your PMIx MCA default parameter file, or by adding
"PMIX_MCA_pcompress_base_silence_warning=1" to your environment.
--------------------------------------------------------------------------
Hello, World! I am process 1 out of 2
Hello, World! I am process 0 out of 2
```
