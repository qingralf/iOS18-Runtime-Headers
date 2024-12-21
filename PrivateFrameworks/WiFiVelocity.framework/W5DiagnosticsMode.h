/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5DiagnosticsMode : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _info;
    NSArray * _peers;
    long long  _state;
    NSMutableDictionary * _timestamps;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSDictionary *info;
@property (nonatomic, retain) NSArray *peers;
@property (nonatomic, readonly) long long state;
@property (nonatomic, retain) NSMutableDictionary *timestamps;
@property (nonatomic, retain) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compareCollectionTimeLatestFirst:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)info;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 uuid:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDiagnosticsMode:(id)arg1;
- (id)peers;
- (void)setInfo:(id)arg1;
- (void)setPeers:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTimestamps:(id)arg1;
- (void)setUuid:(id)arg1;
- (long long)state;
- (id)timestampFor:(long long)arg1;
- (id)timestamps;
- (void)updatePeer:(id)arg1;
- (id)uuid;

@end