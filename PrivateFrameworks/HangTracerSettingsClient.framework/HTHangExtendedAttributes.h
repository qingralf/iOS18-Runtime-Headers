/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HangTracerSettingsClient.framework/HangTracerSettingsClient
 */

@interface HTHangExtendedAttributes : NSObject {
    NSString * _bundleID;
    NSString * _creationDate;
    NSString * _duration;
    NSString * _hangID;
    NSString * _processPath;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSString *creationDate;
@property (nonatomic, readonly, copy) NSString *duration;
@property (nonatomic, readonly, copy) NSString *hangID;
@property (nonatomic, readonly, copy) NSString *processPath;

- (void).cxx_destruct;
- (id)bundleID;
- (id)creationDate;
- (id)duration;
- (id)getExtendedAttributeNamed:(id)arg1 forFileAtPath:(id)arg2;
- (id)hangID;
- (id)initWithFilePath:(id)arg1;
- (id)processPath;

@end