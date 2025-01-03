/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUFontManager : NSObject <NUFontRegistration> {
    NSCountedSet * _referenceCounts;
    NSObject<OS_dispatch_queue> * _registrationQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSCountedSet *referenceCounts;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *registrationQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)decreaseReferenceCountForFontWithURL:(id)arg1;
- (void)increaseReferenceCountForFontWithURL:(id)arg1;
- (id)init;
- (unsigned long long)referenceCountForFontWithURL:(id)arg1;
- (id)referenceCounts;
- (bool)registerFontWithURL:(id)arg1 error:(id*)arg2;
- (id)registrationQueue;
- (bool)shouldUnregisterFontWithURL:(id)arg1;
- (bool)unregisterFontAtURL:(id)arg1 error:(id*)arg2;
- (void)unregisterFontWithURL:(id)arg1;

@end
