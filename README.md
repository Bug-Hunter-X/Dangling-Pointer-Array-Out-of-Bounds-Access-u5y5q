# Dangling Pointer/Array Out-of-Bounds Access in C

This repository demonstrates a common error in C programming: accessing memory outside the bounds of an array.  The code attempts to dereference a pointer that points one element beyond the allocated array, leading to undefined behavior (crashes, unexpected results, etc.). The solution showcases a safe and correct method to avoid this issue.