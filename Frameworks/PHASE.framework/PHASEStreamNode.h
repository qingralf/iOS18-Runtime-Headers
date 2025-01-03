/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PHASE.framework/PHASE
 */

@interface PHASEStreamNode : NSObject {
    struct UniqueObjectId { 
        unsigned long long mStorage[2]; 
    }  _actionTreeUniqueId;
    PHASEEngine * _engine;
    AVAudioFormat * _format;
    PHASENumberMetaParameter * _gainMetaParameter;
    PHASEMixer * _mixer;
    unsigned long long  _nodeUID;
    bool  _normalize;
    PHASENumberMetaParameter * _rateMetaParameter;
    NSNumber * _targetLKFS;
}

@property (nonatomic, readonly) struct UniqueObjectId { unsigned long long x1[2]; } actionTreeUniqueId;
@property (nonatomic, readonly) PHASEEngine *engine;
@property (nonatomic, readonly) AVAudioFormat *format;
@property (nonatomic, readonly) PHASENumberMetaParameter *gainMetaParameter;
@property (nonatomic, readonly) PHASEMixer *mixer;
@property (nonatomic, readonly) unsigned long long nodeUID;
@property (readonly) bool normalize;
@property (nonatomic, readonly) PHASENumberMetaParameter *rateMetaParameter;
@property (readonly) NSNumber *targetLKFS;

- (void).cxx_destruct;
- (struct UniqueObjectId { unsigned long long x1[2]; })actionTreeUniqueId;
- (id)engine;
- (id)format;
- (id)gainMetaParameter;
- (id)initWithEngine:(id)arg1 actionTreeUniqueId:(struct UniqueObjectId { unsigned long long x1[2]; })arg2 nodeStringHashId:(unsigned long long)arg3 mixer:(id)arg4 format:(id)arg5 normalize:(bool)arg6 targetLKFS:(id)arg7;
- (id)mixer;
- (unsigned long long)nodeUID;
- (bool)normalize;
- (id)rateMetaParameter;
- (id)targetLKFS;

@end
