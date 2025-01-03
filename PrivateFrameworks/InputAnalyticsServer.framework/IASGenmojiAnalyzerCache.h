/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InputAnalyticsServer.framework/InputAnalyticsServer
 */

@interface IASGenmojiAnalyzerCache : NSObject {
    NSDate * _allImagesModelStartTime;
    double  _allImagesTotalModelRuntime;
    NSDate * _ambiguousPersonFoundTime;
    NSString * _bundleId;
    unsigned long long  _currentBlobIndex;
    IASGenmojiQueryInfo * _currentQueryInfo;
    unsigned long long  _entryPoint;
    NSMutableSet * _failureReasons;
    NSMutableSet * _featureModel;
    NSDate * _initialImageModelStartTime;
    double  _initialImageTotalModelRuntime;
    bool  _isLastPrompt;
    bool  _isLowConfidenceFromCharacterPicker;
    unsigned long long  _numImagesGenerated;
    unsigned long long  _numImagesInserted;
    unsigned long long  _numImagesSaved;
    unsigned long long  _numInitialImageRetries;
    unsigned long long  _numPrompts;
    unsigned long long  _numTotalRetries;
    unsigned long long  _personalizationType;
    NSString * _previousPrompt;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _seenBlobRange;
    bool  _usedCaption;
    bool  _usedCopy;
    bool  _usedShare;
}

@property (nonatomic, retain) NSDate *allImagesModelStartTime;
@property (nonatomic) double allImagesTotalModelRuntime;
@property (nonatomic, retain) NSDate *ambiguousPersonFoundTime;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic) unsigned long long currentBlobIndex;
@property (nonatomic, retain) IASGenmojiQueryInfo *currentQueryInfo;
@property (nonatomic) unsigned long long entryPoint;
@property (nonatomic, retain) NSMutableSet *failureReasons;
@property (nonatomic, retain) NSMutableSet *featureModel;
@property (nonatomic, retain) NSDate *initialImageModelStartTime;
@property (nonatomic) double initialImageTotalModelRuntime;
@property (nonatomic) bool isLastPrompt;
@property (nonatomic) bool isLowConfidenceFromCharacterPicker;
@property (nonatomic) unsigned long long numImagesGenerated;
@property (nonatomic) unsigned long long numImagesInserted;
@property (nonatomic) unsigned long long numImagesSaved;
@property (nonatomic) unsigned long long numInitialImageRetries;
@property (nonatomic) unsigned long long numPrompts;
@property (nonatomic) unsigned long long numTotalRetries;
@property (nonatomic) unsigned long long personalizationType;
@property (nonatomic, copy) NSString *previousPrompt;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } seenBlobRange;
@property (nonatomic) bool usedCaption;
@property (nonatomic) bool usedCopy;
@property (nonatomic) bool usedShare;

- (void).cxx_destruct;
- (id)allImagesModelStartTime;
- (double)allImagesTotalModelRuntime;
- (id)ambiguousPersonFoundTime;
- (id)bundleId;
- (unsigned long long)currentBlobIndex;
- (id)currentQueryInfo;
- (unsigned long long)entryPoint;
- (id)failureReasons;
- (id)featureModel;
- (id)init;
- (id)initialImageModelStartTime;
- (double)initialImageTotalModelRuntime;
- (bool)isLastPrompt;
- (bool)isLowConfidenceFromCharacterPicker;
- (unsigned long long)numImagesGenerated;
- (unsigned long long)numImagesInserted;
- (unsigned long long)numImagesSaved;
- (unsigned long long)numInitialImageRetries;
- (unsigned long long)numPrompts;
- (unsigned long long)numTotalRetries;
- (unsigned long long)personalizationType;
- (id)previousPrompt;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })seenBlobRange;
- (void)setAllImagesModelStartTime:(id)arg1;
- (void)setAllImagesTotalModelRuntime:(double)arg1;
- (void)setAmbiguousPersonFoundTime:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setCurrentBlobIndex:(unsigned long long)arg1;
- (void)setCurrentQueryInfo:(id)arg1;
- (void)setEntryPoint:(unsigned long long)arg1;
- (void)setFailureReasons:(id)arg1;
- (void)setFeatureModel:(id)arg1;
- (void)setInitialImageModelStartTime:(id)arg1;
- (void)setInitialImageTotalModelRuntime:(double)arg1;
- (void)setIsLastPrompt:(bool)arg1;
- (void)setIsLowConfidenceFromCharacterPicker:(bool)arg1;
- (void)setNumImagesGenerated:(unsigned long long)arg1;
- (void)setNumImagesInserted:(unsigned long long)arg1;
- (void)setNumImagesSaved:(unsigned long long)arg1;
- (void)setNumInitialImageRetries:(unsigned long long)arg1;
- (void)setNumPrompts:(unsigned long long)arg1;
- (void)setNumTotalRetries:(unsigned long long)arg1;
- (void)setPersonalizationType:(unsigned long long)arg1;
- (void)setPreviousPrompt:(id)arg1;
- (void)setSeenBlobRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setUsedCaption:(bool)arg1;
- (void)setUsedCopy:(bool)arg1;
- (void)setUsedShare:(bool)arg1;
- (bool)usedCaption;
- (bool)usedCopy;
- (bool)usedShare;

@end
