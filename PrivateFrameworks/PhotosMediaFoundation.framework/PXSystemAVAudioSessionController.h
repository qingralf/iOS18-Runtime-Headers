/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosMediaFoundation.framework/PhotosMediaFoundation
 */

@interface PXSystemAVAudioSessionController : NSObject <PXAVAudioSessionController, PXAVResourceReclamationObserver> {
    <PXAVAudioSession> * _audioSession;
    long long  _category;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _categoryLock;
    NSString * _name;
    PXSystemAVResourceReclamationController * _reclamationController;
    unsigned long long  _signpostID;
}

@property (setter=_audioSessionQueue_setAudioSession:, nonatomic, retain) <PXAVAudioSession> *audioSession;
@property (readonly) long long currentCategory;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long signpostID;

+ (id)applicationAVAudioSessionController;
+ (id)audioSessionQueue;
+ (id)log;

- (void).cxx_destruct;
- (void)_audioSessionQueue_applyCategory:(long long)arg1 completion:(id /* block */)arg2;
- (void)_audioSessionQueue_applyExistingCategoryToAudioSessionIfNeeded;
- (void)_audioSessionQueue_setAudioSession:(id)arg1;
- (void)applyCategory:(long long)arg1 completion:(id /* block */)arg2;
- (id)audioSession;
- (long long)currentCategory;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 audioSession:(id)arg2;
- (id)name;
- (void)resourceReclamationEventDidOccur:(id)arg1;
- (void)setCurrentCategory:(long long)arg1;
- (unsigned long long)signpostID;

@end