/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQZEntryInflateInputStream : NSObject <GQZEntryInputStream> {
    unsigned long long  mCalculatedCrc;
    unsigned long long  mCheckCrc;
    long long  mEnd;
    <GQZArchiveInputStream> * mInput;
    long long  mOffset;
    char * mOutBuffer;
    unsigned long long  mOutBufferSize;
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned long long total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned long long total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned long long adler; 
        unsigned long long reserved; 
    }  mStream;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long long)arg4 input:(id)arg5;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)readToOwnBuffer:(const char **)arg1 size:(unsigned long long*)arg2;

@end