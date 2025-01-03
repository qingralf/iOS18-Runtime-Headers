/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Speech.framework/Speech
 */

@interface SFSpeechAnalyzerOptionsLoggingInfo : NSObject <NSCopying> {
    NSUUID * _asrID;
    NSString * _dictationUIInteractionID;
    NSUUID * _requestID;
}

@property (nonatomic, readonly, copy) NSUUID *asrID;
@property (nonatomic, readonly, copy) NSString *dictationUIInteractionID;
@property (nonatomic, readonly, copy) NSUUID *requestID;

- (void).cxx_destruct;
- (id)asrID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictationUIInteractionID;
- (id)initWithAsrID:(id)arg1 requestID:(id)arg2 dictationUIInteractionID:(id)arg3;
- (id)requestID;

@end
