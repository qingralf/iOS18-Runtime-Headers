/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Speech.framework/Speech
 */

@interface SFPersonaManager : NSObject {
    NSSet * _personaIds;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) NSSet *personaIds;

+ (id)currentPersonaId;
+ (void)runAsPersona:(id)arg1 block:(id /* block */)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_initWithQueue:(id)arg1;
- (void)_initializeUserProfileStore;
- (void)_refreshPersonaIds;
- (id)personaIds;
- (bool)personaMatchesEnrolledUser:(id)arg1;

@end
