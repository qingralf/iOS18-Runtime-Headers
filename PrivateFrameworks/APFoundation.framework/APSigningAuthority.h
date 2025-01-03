/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation
 */

@interface APSigningAuthority : NSObject <APSigningAuthorizable> {
    long long  _failureError;
    NSString * _poolName;
    APSigningContextStorage * _signingContextStorage;
    unsigned long long  _signpostID;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) long long failureError;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isUsed;
@property (nonatomic, retain) NSString *poolName;
@property (nonatomic, retain) APSigningContextStorage *signingContextStorage;
@property (nonatomic) unsigned long long signpostID;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usingStashedContext;

- (void).cxx_destruct;
- (bool)_createAttribute:(void**)arg1 enableStashing:(bool*)arg2;
- (id)_createContext:(void**)arg1 requestStashed:(bool*)arg2;
- (void)_destroyObject:(void**)arg1 ofType:(long long)arg2;
- (id)_failureString:(long long)arg1;
- (id)_getEncodedStringFromFPDIDataRef:(void*)arg1 withLength:(unsigned int)arg2;
- (id)_handleInitResponse:(void*)arg1 length:(unsigned int)arg2 forContextRef:(void*)arg3 error:(id)arg4;
- (void)_handleSetupResponse:(void*)arg1 length:(unsigned int)arg2 forContextRef:(unsigned long long*)arg3 error:(id)arg4;
- (void)_sendInitRequest:(id)arg1 forContextRef:(void*)arg2 withCompletion:(id /* block */)arg3;
- (void)_sendSetupRequest:(id)arg1 forContextRef:(unsigned long long*)arg2 withCompletion:(id /* block */)arg3;
- (void)_setFailureStateWithError:(long long)arg1;
- (void)_setFailureStateWithErrorAndDestroyContext:(long long)arg1 contextRef:(void*)arg2;
- (void)_setupNewContext:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)_signatureForData:(id)arg1 error:(id*)arg2;
- (bool)_verifyContext:(void*)arg1;
- (long long)failureError;
- (id)initWithPoolName:(id)arg1;
- (bool)isUsed;
- (id)poolName;
- (void)setFailureError:(long long)arg1;
- (void)setIsUsed:(bool)arg1;
- (void)setPoolName:(id)arg1;
- (void)setSigningContextStorage:(id)arg1;
- (void)setSignpostID:(unsigned long long)arg1;
- (void)setState:(long long)arg1;
- (void)setupWithCompletion:(bool)arg1 completion:(id /* block */)arg2;
- (id)signatureForData:(id)arg1 error:(id*)arg2;
- (id)signatureForRawData:(id)arg1 error:(id*)arg2;
- (id)signingContextStorage;
- (unsigned long long)signpostID;
- (long long)state;
- (bool)usingStashedContext;

@end
