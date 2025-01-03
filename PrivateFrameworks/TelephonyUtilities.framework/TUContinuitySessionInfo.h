/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUContinuitySessionInfo : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _activeConversations;
    NSArray * _calls;
    TUNearbyDeviceHandle * _device;
    NSArray * _favorites;
    bool  _isDedicatedSession;
    NSArray * _recentCalls;
    NSDictionary * _recentCallsContacts;
}

@property (nonatomic, readonly) NSArray *activeConversations;
@property (nonatomic, readonly) NSArray *calls;
@property (nonatomic, readonly) TUNearbyDeviceHandle *device;
@property (nonatomic, readonly) NSArray *favorites;
@property (nonatomic, readonly) bool isDedicatedSession;
@property (nonatomic, readonly) NSArray *recentCalls;
@property (nonatomic, readonly) NSDictionary *recentCallsContacts;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeConversations;
- (id)calls;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)favorites;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 calls:(id)arg2 activeConversations:(id)arg3 favorites:(id)arg4;
- (id)initWithDevice:(id)arg1 calls:(id)arg2 activeConversations:(id)arg3 recentCalls:(id)arg4 recentCallsContacts:(id)arg5;
- (id)initWithDevice:(id)arg1 calls:(id)arg2 activeConversations:(id)arg3 recentCalls:(id)arg4 recentCallsContacts:(id)arg5 isDedicatedSession:(bool)arg6 favorites:(id)arg7 recentCallsInfos:(id)arg8;
- (bool)isDedicatedSession;
- (id)recentCalls;
- (id)recentCallsContacts;

@end
