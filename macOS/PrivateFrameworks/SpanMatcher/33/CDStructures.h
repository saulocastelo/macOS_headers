//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct cdb {
    int cdb_fd;
    unsigned int cdb_fsize;
    unsigned int cdb_dend;
    char *cdb_mem;
    unsigned int cdb_vpos;
    unsigned int cdb_vlen;
    unsigned int cdb_kpos;
    unsigned int cdb_klen;
};

struct cdb_find {
    struct cdb *cdb_cdbp;
    unsigned int cdb_hval;
    char *cdb_htp;
    char *cdb_htab;
    char *cdb_htend;
    unsigned int cdb_httodo;
    void *cdb_key;
    unsigned int cdb_klen;
};

struct cdb_make {
    int cdb_fd;
    unsigned int cdb_dpos;
    unsigned int cdb_rcnt;
    unsigned char cdb_buf[4096];
    char *cdb_bpos;
    struct cdb_rl *cdb_rec[256];
};

struct cdb_rl;

