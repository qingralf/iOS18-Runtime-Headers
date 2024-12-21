/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SABinaryLoadInfoToDisplay : SABinaryLoadInfo {
    SAExclave * _exclave;
    unsigned long long  _highestOffset;
    bool  _isInKernelAddressSpace;
    bool  _isZerothAndOnlySegment;
}

@property unsigned long long highestOffset;
@property bool isZerothAndOnlySegment;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)exclave;
- (unsigned long long)highestOffset;
- (bool)isInKernelAddressSpace;
- (bool)isZerothAndOnlySegment;
- (void)setHighestOffset:(unsigned long long)arg1;
- (void)setIsZerothAndOnlySegment:(bool)arg1;

@end