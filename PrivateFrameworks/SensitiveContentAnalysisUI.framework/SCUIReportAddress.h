/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SensitiveContentAnalysisUI.framework/SensitiveContentAnalysisUI
 */

@interface SCUIReportAddress : NSObject {
    NSString * _address;
    NSString * _city;
    NSString * _country;
    NSString * _postCode;
    NSString * _state;
}

@property (readonly, copy) NSString *address;
@property (readonly, copy) NSString *city;
@property (readonly, copy) NSString *country;
@property (readonly, copy) NSString *postCode;
@property (readonly, copy) NSString *state;

- (void).cxx_destruct;
- (id)address;
- (id)city;
- (id)country;
- (id)initWithAddress:(id)arg1 city:(id)arg2 state:(id)arg3 country:(id)arg4 postCode:(id)arg5;
- (id)postCode;
- (id)state;

@end