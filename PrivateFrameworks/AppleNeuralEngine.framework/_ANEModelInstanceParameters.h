/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
 */

@interface _ANEModelInstanceParameters : NSObject <NSCopying, NSSecureCoding> {
    NSString * _instanceName;
    NSArray * _procedureArray;
}

@property (nonatomic, readonly, copy) NSString *instanceName;
@property (nonatomic, readonly) NSArray *procedureArray;

+ (id)new;
+ (bool)supportsSecureCoding;
+ (id)withProcedureData:(id)arg1 procedureArray:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProcedureData:(id)arg1 procedureArray:(id)arg2;
- (id)instanceName;
- (id)procedureArray;

@end
