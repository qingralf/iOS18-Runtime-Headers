/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSURLHostComponentEnumerator : NSEnumerator {
    NSMutableString * _accumulatorString;
    bool  _containsEmptyComponents;
    bool  _didBeginConsumingCharacters;
    bool  _didCheckTopLevelDomain;
    bool  _didFindTopLevelDomain;
    bool  _didGenerateFullHighLevelDomain;
    NSString * _host;
    unsigned int  _ipv4Address;
    struct in6_addr { 
        union { 
            unsigned char __u6_addr8[16]; 
            unsigned short __u6_addr16[8]; 
            unsigned int __u6_addr32[4]; 
        } __u6_addr; 
    }  _ipv6Address;
    bool  _isSpeculative;
    long long  _kind;
    unsigned long long  _length;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _nextSearchRange;
    unsigned long long  _numberOfAccummulatedComponents;
    unsigned long long  _options;
    NSString * _topLevelDomainSubstring;
}

@property (nonatomic, readonly) bool containsEmptyComponents;
@property (nonatomic, readonly, copy) NSString *host;
@property (nonatomic, readonly) unsigned int ipv4Address;
@property (nonatomic, readonly) struct in6_addr { union { unsigned char x_1_1_1[16]; unsigned short x_1_1_2[8]; unsigned int x_1_1_3[4]; } x1; } ipv6Address;
@property (nonatomic, readonly) bool isSpeculative;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) unsigned long long options;

- (void).cxx_destruct;
- (bool)_checkIsIPAddress;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_nextPointRangeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 didFindPeriod:(bool*)arg2;
- (void)clearAccumulatedDomains;
- (bool)containsEmptyComponents;
- (id)host;
- (id)init;
- (id)initWithHost:(id)arg1 options:(unsigned long long)arg2;
- (unsigned int)ipv4Address;
- (struct in6_addr { union { unsigned char x_1_1_1[16]; unsigned short x_1_1_2[8]; unsigned int x_1_1_3[4]; } x1; })ipv6Address;
- (bool)isSpeculative;
- (long long)kind;
- (id)nextObject;
- (unsigned long long)options;

@end