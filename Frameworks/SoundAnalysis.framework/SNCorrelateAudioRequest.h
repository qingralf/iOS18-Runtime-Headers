/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNCorrelateAudioRequest : NSObject <SNRequest> {
    void impl;
}

@property (nonatomic) double overlapFactor;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAudioFile:(id)arg1;
- (id)initWithAudioFile:(id)arg1 overlapFactor:(double)arg2;
- (double)overlapFactor;
- (void)setOverlapFactor:(double)arg1;

@end
