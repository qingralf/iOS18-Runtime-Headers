/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFMaskGenerationFunction1 : NSObject <SFMaskGenerationFunction> {
    id  _mgf1OperationInternal;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) <SFDigestOperation> *digestOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)digestOperation;
- (void)encodeWithCoder:(id)arg1;
- (id)generateMaskWithLength:(long long)arg1 data:(id)arg2 error:(id)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigestOperation:(id)arg1;
- (void)setDigestOperation:(id)arg1;

@end
