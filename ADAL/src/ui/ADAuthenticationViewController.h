// Copyright © Microsoft Open Technologies, Inc.
//
// All Rights Reserved
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// THIS CODE IS PROVIDED *AS IS* BASIS, WITHOUT WARRANTIES OR CONDITIONS
// OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION
// ANY IMPLIED WARRANTIES OR CONDITIONS OF TITLE, FITNESS FOR A
// PARTICULAR PURPOSE, MERCHANTABILITY OR NON-INFRINGEMENT.
//
// See the Apache License, Version 2.0 for the specific language
// governing permissions and limitations under the License.

@protocol ADAuthenticationDelegate;

@interface ADAuthenticationViewController :
#if TARGET_OS_IPHONE
UIViewController
#else
NSViewController
#endif

@property (weak, nonatomic)   id<ADAuthenticationDelegate>     delegate;
#if TARGET_OS_IPHONE
@property (weak, nonatomic)   IBOutlet UIWebView               *webView;
@property (weak, nonatomic)   IBOutlet UIActivityIndicatorView *activityIndicator;
#else
@property (weak, nonatomic)   IBOutlet WebView                 *webView;
#endif


- (IBAction)onCancel:(id)sender;

- (BOOL)startWithURL:(NSURL *)startURL
            endAtURL:(NSURL *)endURL;

@end
