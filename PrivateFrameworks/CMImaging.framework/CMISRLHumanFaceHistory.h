/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMImaging.framework/CMImaging
 */

@interface CMISRLHumanFaceHistory : NSObject {
    NSMutableArray * _faceHistory;
    int  _filterType;
    unsigned long long  _lastUpdatedFrameId;
    int  _maxFaceHistory;
}

@property (nonatomic, retain) NSMutableArray *faceHistory;
@property (readonly) unsigned long long lastUpdatedFrameId;

- (void).cxx_destruct;
- (id)addFaceAndFilter:(id)arg1 frameId:(unsigned long long)arg2;
- (id)faceHistory;
- (void)filterSkinToneLevels;
- (void)filterSkinToneLevelsMedian;
- (id)initWithFilterType:(int)arg1 maxFaceHistory:(int)arg2;
- (unsigned long long)lastUpdatedFrameId;
- (void)setFaceHistory:(id)arg1;

@end
