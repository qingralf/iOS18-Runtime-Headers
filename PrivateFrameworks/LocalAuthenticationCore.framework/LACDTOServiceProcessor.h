/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACDTOServiceProcessor : NSObject <LACEvaluationRequestProcessor> {
    <LACEvaluationRequestProcessor> * _compoundProcessor;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_entitlementsForRequest:(id)arg1;
- (bool)canProcessRequest:(id)arg1;
- (id)initWithSubprocessors:(id)arg1;
- (void)postProcessRequest:(id)arg1 result:(id)arg2 completion:(id /* block */)arg3;
- (void)processRequest:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;

@end
