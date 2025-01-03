/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
 */

@interface _ANEProcedureData : NSObject <NSCopying, NSSecureCoding> {
    NSString * _procedureSymbol;
    NSArray * _weightArray;
}

@property (nonatomic, readonly, copy) NSString *procedureSymbol;
@property (nonatomic, readonly) NSArray *weightArray;

+ (id)new;
+ (id)procedureDataWithSymbol:(id)arg1 weightArray:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProcedure:(id)arg1 weightArray:(id)arg2;
- (id)procedureSymbol;
- (id)weightArray;

@end
