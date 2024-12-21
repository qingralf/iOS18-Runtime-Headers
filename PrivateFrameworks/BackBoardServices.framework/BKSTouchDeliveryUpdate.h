/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSTouchDeliveryUpdate : NSObject <BSDescriptionStreaming, NSCopying, NSSecureCoding> {
    unsigned int  _contextID;
    bool  _isDetached;
    int  _pid;
    unsigned int  _touchIdentifier;
    long long  _type;
}

@property (nonatomic) unsigned int contextID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDetached;
@property (nonatomic) int pid;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int touchIdentifier;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void)appendDescriptionToStream:(id)arg1;
- (unsigned int)contextID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDetached;
- (bool)isEqual:(id)arg1;
- (int)pid;
- (void)setContextID:(unsigned int)arg1;
- (void)setIsDetached:(bool)arg1;
- (void)setPid:(int)arg1;
- (void)setTouchIdentifier:(unsigned int)arg1;
- (void)setType:(long long)arg1;
- (unsigned int)touchIdentifier;
- (long long)type;

@end