/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ShazamKit.framework/ShazamKit
 */

@interface SHSession : NSObject <SHMatcherDelegate, SHSessionDriverDelegate> {
    SHCatalog * _catalog;
    <SHSessionDelegate> * _delegate;
    <SHMatcher> * _matcher;
    <SHSessionDriver> * _sessionDriver;
}

@property (nonatomic, readonly) SHCatalog *catalog;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SHSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SHMatcher> *matcher;
@property (nonatomic, readonly) <SHSessionDriver> *sessionDriver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isSessionDriverSignature:(id)arg1;
- (id)catalog;
- (void)dealloc;
- (id)delegate;
- (void)didCalculateSpectralData:(id)arg1;
- (void)handleCommonActionsForResponse:(id)arg1;
- (id)init;
- (id)initWithCatalog:(id)arg1;
- (id)initWithCatalog:(id)arg1 matcher:(id)arg2 sessionDriver:(id)arg3;
- (void)matchSignature:(id)arg1;
- (void)matchStreamingBuffer:(id)arg1 atTime:(id)arg2;
- (id)matcher;
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;
- (id)sessionDriver;
- (void)sessionDriverEncounteredUnrecoverableError:(id)arg1 forSignature:(id)arg2;
- (void)setDelegate:(id)arg1;
- (bool)shouldGenerateSpectralOutput;
- (bool)validateSignature:(id)arg1 error:(id*)arg2;

@end
