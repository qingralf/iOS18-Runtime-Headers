/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriMessageTypes.framework/SiriMessageTypes
 */

@interface SiriMessageTypes.NLParseResponse : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  fallbackParse;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  languageVariantResult;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  responseStatusCode;
    void responseVariantResult;
    void serverFallbackReason;
    void userParses;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
