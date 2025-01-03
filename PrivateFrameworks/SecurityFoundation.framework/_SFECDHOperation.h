/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFECDHOperation : NSObject <SFKeyDerivingOperation> {
    id  _ecdhOperationInternal;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long mode;
@property (readonly) Class superclass;

+ (long long)_defaultMode;
+ (id)_defaultOperation;
+ (long long)keySource;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMode:(long long)arg1;
- (long long)mode;
- (void)setMode:(long long)arg1;

@end
