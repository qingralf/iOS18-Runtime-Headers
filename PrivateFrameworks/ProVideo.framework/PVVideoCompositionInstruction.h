/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction, NSCopying> {
    bool  _isFreezeFrame;
    bool  m_containsTweening;
    bool  m_enablePostProcessing;
    PVInstructionGraphNode * m_outputIGNode;
    int  m_passthroughTrackID;
    NSArray * m_requiredSourceSampleDataTrackIDs;
    NSArray * m_requiredSourceTrackIDs;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  m_timeRange;
}

@property (nonatomic) bool containsTweening;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablePostProcessing;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFreezeFrame;
@property (nonatomic, retain) PVInstructionGraphNode *outputNode;
@property (nonatomic, readonly) int passthroughTrackID;
@property (nonatomic, readonly) NSArray *requiredSourceSampleDataTrackIDs;
@property (nonatomic, readonly) NSArray *requiredSourceTrackIDs;
@property (readonly) Class superclass;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

- (void).cxx_destruct;
- (bool)containsTweening;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)enablePostProcessing;
- (id)init;
- (bool)isFreezeFrame;
- (void)loadInstructionGraphNodes:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1;
- (id)outputNode;
- (int)passthroughTrackID;
- (id)requiredSourceSampleDataTrackIDs;
- (id)requiredSourceTrackIDs;
- (void)setContainsTweening:(bool)arg1;
- (void)setEnablePostProcessing:(bool)arg1;
- (void)setIsFreezeFrame:(bool)arg1;
- (void)setOutputNode:(id)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (void)unloadInstructionGraphNodes;
- (id)videoInstructionDescription;

@end
