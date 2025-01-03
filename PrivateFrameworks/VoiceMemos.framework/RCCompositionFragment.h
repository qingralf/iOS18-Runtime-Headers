/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCCompositionFragment : NSObject <NSCopying, NSMutableCopying, RCDictionaryPListRepresentationCoding> {
    NSURL * _AVOutputURL;
    double  _contentDuration;
    struct { 
        double beginTime; 
        double endTime; 
    }  _timeRangeInComposition;
    struct { 
        double beginTime; 
        double endTime; 
    }  _timeRangeInContentToUse;
    unsigned long long  _trackIndex;
}

@property (nonatomic, retain) NSURL *AVOutputURL;
@property (nonatomic) double contentDuration;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) struct { double x1; double x2; } timeRangeInComposition;
@property (nonatomic) struct { double x1; double x2; } timeRangeInContentToUse;
@property (nonatomic) unsigned long long trackIndex;
@property (nonatomic, readonly) NSURL *waveformURL;

- (void).cxx_destruct;
- (id)AVOutputURL;
- (double)contentDuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deleteFromFilesystem;
- (id)description;
- (id)dictionaryPListRepresentation;
- (unsigned long long)fileSizeOfAssets;
- (id)initWithAVOutputURL:(id)arg1 contentDuration:(double)arg2 timeRangeInContentToUse:(struct { double x1; double x2; })arg3 timeRangeInComposition:(struct { double x1; double x2; })arg4 trackIndex:(unsigned long long)arg5;
- (id)initWithDictionaryPListRepresentation:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAVOutputURL:(id)arg1;
- (void)setContentDuration:(double)arg1;
- (void)setTimeRangeInComposition:(struct { double x1; double x2; })arg1;
- (void)setTimeRangeInContentToUse:(struct { double x1; double x2; })arg1;
- (void)setTrackIndex:(unsigned long long)arg1;
- (struct { double x1; double x2; })timeRangeInComposition;
- (struct { double x1; double x2; })timeRangeInContentToUse;
- (unsigned long long)trackIndex;
- (id)waveformURL;

@end
