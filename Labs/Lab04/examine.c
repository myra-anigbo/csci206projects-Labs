/*
 * A Linux file examiner
 * CSCI206
 * Myra Anigbo
 */
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {

	if (argc != 2) {
		fprintf(stderr, "Usage: %s FILE\n", argv[0]);
		return 1;
	}

	int f = open(argv[1], O_RDONLY);

	if (f < 0){
        
    	perror("error");
		return 2;
	}
    struct stat buf;
	// use fstat to examine file status
    fstat( f, &buf);
    
    printf("st_dev: %ld\n",(long int)buf.st_dev);
    printf("st_ino: %ld\n",(long int)buf.st_ino);
    printf("st_mode: %o\n", buf.st_mode);
    printf("st_nlink: %ld\n",(long int)buf.st_nlink);
    printf("st_uid: %ld\n", (long int)buf.st_uid);
    printf("st_gid: %ld\n", (long int)buf.st_gid);
    printf("st_rdev: %ld\n", (long int)buf.st_rdev);
    printf("st_size: %ld\n", (long int)buf.st_size);
    printf("st_blksize: %ld\n", (long int)buf.st_blksize);
    printf("st_blocks: %ld\n", (long int)buf.st_blocks);
    printf("st_atime: %s", ctime((time_t*)&buf.st_atime));
    printf("st_mtime: %s", ctime((time_t*)&buf.st_mtime));
    printf("st_ctime: %s", ctime((time_t*)&buf.st_ctime));

	close (f);
	return 0;
}
