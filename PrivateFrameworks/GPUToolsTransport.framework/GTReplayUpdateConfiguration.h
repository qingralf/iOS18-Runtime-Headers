/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GPUToolsTransport.framework/GPUToolsTransport
 */

@interface GTReplayUpdateConfiguration : GTReplayRequest <NSSecureCoding> {
    GTReplayConfiguration * _configuration;
}

@property (nonatomic, retain) GTReplayConfiguration *configuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setConfiguration:(id)arg1;

@end