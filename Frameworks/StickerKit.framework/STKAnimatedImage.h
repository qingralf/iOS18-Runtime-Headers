/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StickerKit.framework/StickerKit
 */

@interface STKAnimatedImage : NSObject {
    void durations;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void images;
    void size;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithData:(id)arg1 maxCount:(long long)arg2 maxDimension:(double)arg3 identifier:(id)arg4;
- (id)initWithImages:(id)arg1 durations:(id)arg2 identifier:(id)arg3;
- (id)initWithURL:(id)arg1 maxCount:(long long)arg2 maxDimension:(double)arg3 identifier:(id)arg4;

@end