/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EDPSecurity.framework/EDPSecurity
 */

@interface ValidationResponse : NSObject {
    NSArray * certificateChain;
    bool  isTrusted;
    NSData * validatedData;
}

@property (nonatomic, retain) NSArray *certificateChain;
@property (nonatomic) bool isTrusted;
@property (nonatomic, retain) NSData *validatedData;

- (void).cxx_destruct;
- (id)certificateChain;
- (bool)isTrusted;
- (void)setCertificateChain:(id)arg1;
- (void)setIsTrusted:(bool)arg1;
- (void)setValidatedData:(id)arg1;
- (id)validatedData;

@end