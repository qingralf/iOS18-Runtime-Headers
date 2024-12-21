/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@interface PK_ipp_attribute_t : NSObject <NSCopying, NSSecureCoding> {
    int  _group_tag;
    int  _value_tag;
    NSMutableArray * _values;
    NSString * x_name;
}

@property (readonly) int group_tag;
@property (readonly) NSString *name;
@property (readonly) unsigned long long num_values;
@property (readonly) int value_tag;
@property (readonly) NSMutableArray *values;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copySettingGroup:(int)arg1;
- (id)addNewEmptyValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateValues:(id /* block */)arg1;
- (int)group_tag;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 group:(int)arg2 value:(int)arg3;
- (id)loggingDict;
- (id)name;
- (unsigned long long)num_values;
- (void)setNSName:(id)arg1;
- (void)setValueTag:(int)arg1;
- (void)toss_last_value;
- (int)value_tag;
- (id)values;
- (void)withNewEmptyValue:(id /* block */)arg1;

@end