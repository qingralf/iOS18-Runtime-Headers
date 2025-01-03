/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatform.framework/IntelligencePlatform
 */

@interface GDViewAccessInfo : NSObject <NSSecureCoding> {
    bool  _alwaysAvailable;
    NSString * _tableName;
}

@property (nonatomic, readonly) bool alwaysAvailable;
@property (nonatomic, readonly) NSString *tableName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)alwaysAvailable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTableName:(id)arg1 alwaysAvailable:(bool)arg2;
- (id)tableName;

@end
