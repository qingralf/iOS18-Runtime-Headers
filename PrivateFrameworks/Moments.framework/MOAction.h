/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Moments.framework/Moments
 */

@interface MOAction : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _actionMetaData;
    NSString * _actionName;
    double  _actionNameConfidence;
    long long  _actionSubtype;
    unsigned long long  _actionType;
    NSUUID * _identifier;
    long long  _sourceEventAccessType;
    NSUUID * _sourceEventIdentifier;
}

@property (nonatomic, retain) NSDictionary *actionMetaData;
@property (nonatomic, readonly, retain) NSString *actionName;
@property (nonatomic, readonly) double actionNameConfidence;
@property (nonatomic, readonly) long long actionSubtype;
@property (nonatomic, readonly) unsigned long long actionType;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic) long long sourceEventAccessType;
@property (nonatomic, copy) NSUUID *sourceEventIdentifier;

+ (id)actionNameFromLifeEvent:(id)arg1;
+ (unsigned long long)actionTypeFromLifeEvent:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)accessTypeFromActionType:(unsigned long long)arg1 actionSubtype:(long long)arg2;
- (id)actionMetaData;
- (id)actionName;
- (double)actionNameConfidence;
- (long long)actionSubtype;
- (unsigned long long)actionType;
- (id)bundleSourceType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithActionName:(id)arg1 actionType:(unsigned long long)arg2;
- (id)initWithActionName:(id)arg1 actionType:(unsigned long long)arg2 actionSubtype:(long long)arg3;
- (id)initWithActionName:(id)arg1 actionType:(unsigned long long)arg2 actionSubtype:(long long)arg3 actionMetaData:(id)arg4;
- (id)initWithActionName:(id)arg1 actionType:(unsigned long long)arg2 actionSubtype:(long long)arg3 actionNameConfidence:(double)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 actionName:(id)arg2 actionType:(unsigned long long)arg3 actionSubtype:(long long)arg4 actionNameConfidence:(double)arg5 actionMetaData:(id)arg6;
- (id)initWithLifeEvent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setActionMetaData:(id)arg1;
- (void)setSourceEventAccessType:(long long)arg1;
- (void)setSourceEventIdentifier:(id)arg1;
- (long long)sourceEventAccessType;
- (id)sourceEventIdentifier;

@end