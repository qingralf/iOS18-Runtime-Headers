/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNFileCopyingResult : NSObject <SNResult> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  impl;
}

@property (nonatomic, readonly) long long fileSize;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSURL *itemURL;

- (void).cxx_destruct;
- (long long)fileSize;
- (id)filename;
- (id)init;
- (id)itemURL;

@end