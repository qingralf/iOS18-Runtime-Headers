/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
 */

@interface CHSWidgetRelevanceGroupAttribute : CHSWidgetRelevanceAttribute {
    NSString * _groupIdentifier;
    unsigned long long  _groupType;
}

@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, readonly) unsigned long long groupType;

+ (bool)supportsSecureCoding;
+ (id)ungrouped;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (unsigned long long)groupType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNamedGroupIdentifier:(id)arg1;
- (id)initWithNamedGroupIdentifier:(id)arg1 groupType:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;

@end
