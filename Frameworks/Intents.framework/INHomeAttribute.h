/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INHomeAttribute : NSObject <INHomeAttributeExport, NSCopying, NSSecureCoding> {
    bool  _boolValue;
    double  _doubleValue;
    NSString * _stringValue;
    long long  _type;
    long long  _valueType;
}

@property (nonatomic, readonly) bool boolValue;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double doubleValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long valueType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)boolValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 boolValue:(bool)arg2;
- (id)initWithType:(long long)arg1 doubleValue:(double)arg2;
- (id)initWithType:(long long)arg1 stringValue:(id)arg2;
- (id)initWithType:(long long)arg1 valueType:(long long)arg2 boolValue:(bool)arg3 doubleValue:(double)arg4 stringValue:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)stringValue;
- (long long)type;
- (long long)valueType;

@end
