/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Portrait.framework/Portrait
 */

@interface PTImageblockConfig : NSObject {
    unsigned long long  _imageblockSize;
    struct ImageBlkOutputOffset { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*sourceOffset; 
    }  _outOffset;
    void _scissorRectOffset;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _threads;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _threadsPerGroup;
}

@property (nonatomic, readonly) unsigned long long imageblockSize;
@property (nonatomic, readonly) struct ImageBlkOutputOffset { } outOffset;
@property (nonatomic, readonly) void scissorRectOffset;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } threads;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } threadsPerGroup;

+ (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })adjustScissorRectToImageBlocks:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;

- (unsigned long long)imageblockSize;
- (id)initWithPTTexture:(id)arg1;
- (id)initWithPTTexture:(void *)arg1 outRect:(void *)arg2; // needs 2 arg types, found 1: id
- (id)initWithPTTexture:(id)arg1 scissorRect:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2;
- (id)initWithTexture:(id)arg1;
- (id)initWithTextureSize:(void *)arg1 scissorRect:(void *)arg2 outRect:(void *)arg3; // needs 3 arg types, found 1: struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }
- (struct ImageBlkOutputOffset { })outOffset;
- (void)scissorRectOffset;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })threads;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })threadsPerGroup;

@end
