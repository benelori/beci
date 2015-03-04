<?php
/**
 * @file
 * activity_nodes.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function activity_nodes_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'1173\',
      \'uid\' => \'3\',
      \'title\' => \'Evenimente\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2b95a53a-a769-41c6-a31b-0914919b2c13\',
      \'nid\' => \'1173\',
      \'type\' => \'activity\',
      \'language\' => \'ro\',
      \'created\' => \'1423231860\',
      \'changed\' => \'1425030314\',
      \'tnid\' => \'916\',
      \'translate\' => \'0\',
      \'uuid\' => \'02d3b2c5-c4f0-4275-9968-856f1ac71511\',
      \'revision_timestamp\' => \'1425030314\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Ocazional, membrii&nbsp;GTK organizează&nbsp;evenimente&nbsp;în strânsă legătură cu activitățile organizației.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Ocazional, membrii GTK organizează evenimente în strânsă legătură cu activitățile organizației.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'664\',
            \'uid\' => \'1\',
            \'filename\' => \'fff.png\',
            \'uri\' => \'public://fff_2.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'2764\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422444727\',
            \'type\' => \'image\',
            \'uuid\' => \'b4c9d85a-b8d9-4670-bd61-a5ef5466f7c6\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'600\',
              \'height\' => \'400\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'600\',
            \'height\' => \'400\',
          ),
        ),
      ),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'677\',
            \'uid\' => \'1\',
            \'filename\' => \'tev-01.png\',
            \'uri\' => \'public://tev-01.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'1884\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422450062\',
            \'type\' => \'image\',
            \'uuid\' => \'51c2b2df-1e6c-4778-b669-daf4b595fe41\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'47\',
              \'height\' => \'46\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'47\',
            \'height\' => \'46\',
          ),
        ),
      ),
      \'field_summary\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Ocazional, membrii GTK organizează&nbsp;evenimente&nbsp;în strânsă legătură cu activitățile organizației.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Ocazional, membrii GTK organizează evenimente în strânsă legătură cu activitățile organizației.</p>\\n",
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1423231860\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1184\',
        \'source\' => \'node/1173\',
        \'alias\' => \'evenimente\',
        \'language\' => \'ro\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Evenimente\',
        \'mlid\' => 0,
        \'plid\' => \'1024\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-46\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => TRUE,
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1172\',
      \'uid\' => \'3\',
      \'title\' => \'Events\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a2519ab4-a9d8-434c-a538-5b91b9209301\',
      \'nid\' => \'1172\',
      \'type\' => \'activity\',
      \'language\' => \'en\',
      \'created\' => \'1423231770\',
      \'changed\' => \'1425030356\',
      \'tnid\' => \'916\',
      \'translate\' => \'0\',
      \'uuid\' => \'0d82ed92-cee7-4db6-b63c-3d2e96f1cb42\',
      \'revision_timestamp\' => \'1425030356\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Occasionally, GTK members organize events closely&nbsp;related to the organization\'s activities.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Occasionally, GTK members organize events closely related to the organization\'s activities.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'664\',
            \'uid\' => \'1\',
            \'filename\' => \'fff.png\',
            \'uri\' => \'public://fff_2.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'2764\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422444727\',
            \'type\' => \'image\',
            \'uuid\' => \'b4c9d85a-b8d9-4670-bd61-a5ef5466f7c6\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'600\',
              \'height\' => \'400\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'600\',
            \'height\' => \'400\',
          ),
        ),
      ),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'677\',
            \'uid\' => \'1\',
            \'filename\' => \'tev-01.png\',
            \'uri\' => \'public://tev-01.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'1884\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422450062\',
            \'type\' => \'image\',
            \'uuid\' => \'51c2b2df-1e6c-4778-b669-daf4b595fe41\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'47\',
              \'height\' => \'46\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'47\',
            \'height\' => \'46\',
          ),
        ),
      ),
      \'field_summary\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Occasionally, GTK members organize events closely&nbsp;related to the organization\'s&nbsp;activities.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Occasionally, GTK members organize events closely related to the organization\'s activities.</p>\\n",
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1423231770\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1183\',
        \'source\' => \'node/1172\',
        \'alias\' => \'events\',
        \'language\' => \'en\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Events\',
        \'mlid\' => 0,
        \'plid\' => \'1025\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-46\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => TRUE,
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1226\',
      \'uid\' => \'3\',
      \'title\' => \'Iparág elemzés\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'71a30f9f-ab2d-4401-8243-ef1389d7cb45\',
      \'nid\' => \'1226\',
      \'type\' => \'activity\',
      \'language\' => \'hu\',
      \'created\' => \'1424946599\',
      \'changed\' => \'1424946599\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5fd1f34e-eb2f-46c6-9224-1f92e89d6826\',
      \'revision_timestamp\' => \'1424946599\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Általában egy ágazat, egy piac mély megismerését, átlátását és meglátások, elemzések strukturált prezentálását tűzik ki célul, vállalatvezetők által koordináltak, hosszabb lefolyásúak, általában több részeredmény-ismertetést, módosítást, egyeztetést igényelnek. A végcélt ezúttal is egy olyan prezentáció, tanulmány előállítása jelenti, amely adott piaci döntési szituációkkal kapcsolatos. Lényeges szempont, hogy olyanná kell váljon a szellemi végtermék, hogy azt gyakorlatban hasznosíthatónak ítélje meg egy vállalatvezető. A gyakorlati hasznosíthatóság alatt azt értjük, hogy a tanulmány formai és tartalmi követelmények szempontjából teljesen alkalmas arra, hogy valós bemutatón vagy tárgyaláson felhasználható legyen (avagy… mi van az esettanulmányozások után?).</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Általában egy ágazat, egy piac mély megismerését, átlátását és meglátások, elemzések strukturált prezentálását tűzik ki célul, vállalatvezetők által koordináltak, hosszabb lefolyásúak, általában több részeredmény-ismertetést, módosítást, egyeztetést igényelnek. A végcélt ezúttal is egy olyan prezentáció, tanulmány előállítása jelenti, amely adott piaci döntési szituációkkal kapcsolatos. Lényeges szempont, hogy olyanná kell váljon a szellemi végtermék, hogy azt gyakorlatban hasznosíthatónak ítélje meg egy vállalatvezető. A gyakorlati hasznosíthatóság alatt azt értjük, hogy a tanulmány formai és tartalmi követelmények szempontjából teljesen alkalmas arra, hogy valós bemutatón vagy tárgyaláson felhasználható legyen (avagy… mi van az esettanulmányozások után?).</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1016\',
            \'uid\' => \'3\',
            \'filename\' => \'fff.png\',
            \'uri\' => \'public://fff_3.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'2764\',
            \'status\' => \'1\',
            \'timestamp\' => \'1424946599\',
            \'type\' => \'image\',
            \'uuid\' => \'6d50bb11-eea5-426e-95b4-30f32d519518\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'600\',
              \'height\' => \'400\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'600\',
            \'height\' => \'400\',
          ),
        ),
      ),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1015\',
            \'uid\' => \'3\',
            \'filename\' => \'GTK-babuk_1.jpg\',
            \'uri\' => \'public://GTK-babuk_1_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'76386\',
            \'status\' => \'1\',
            \'timestamp\' => \'1424946599\',
            \'type\' => \'image\',
            \'uuid\' => \'1433dcda-757f-4f1b-803c-fe2f136add07\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'752\',
              \'height\' => \'877\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'752\',
            \'height\' => \'877\',
          ),
        ),
      ),
      \'field_summary\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Egy piac mély megismerését, átlátását és meglátások, elemzések strukturált prezentálását tűzik ki célul.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Egy piac mély megismerését, átlátását és meglátások, elemzések strukturált prezentálását tűzik ki célul.</p>\\n",
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424946599\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1237\',
        \'source\' => \'node/1226\',
        \'alias\' => \'iparág-elemzés\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1171\',
      \'uid\' => \'3\',
      \'title\' => \'Management consulting\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7bf05df4-1b07-4c8d-b1aa-280dbf902608\',
      \'nid\' => \'1171\',
      \'type\' => \'activity\',
      \'language\' => \'ro\',
      \'created\' => \'1423231545\',
      \'changed\' => \'1423231545\',
      \'tnid\' => \'915\',
      \'translate\' => \'0\',
      \'uuid\' => \'66a223b7-861d-470d-85c6-b66066b8836d\',
      \'revision_timestamp\' => \'1423231545\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Acest program oferă membrilor GTK posibilitatea de a lucra la probleme manageriale reale (bazate pe studii de piaţă) sau apropiate de realitate (bazate pe studii de caz). În cadrul acestor programe principala sarcină a membrilor este de a lua decizii manageriale, de a dezvolta metode şi idei de fundamentare a acestor decizii, şi de a prezenta munca lor în faţa unor specialişti din domeniu. Programele bazate pe studii de caz sunt considerate un training premergător rezolvării problemelor manageriale reale.</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li class=\\"rtejustify\\"><strong>Proiecte de studii de caz</strong>&nbsp;– Membrii GTK elaborează o analiză şi o soluţie detaliată a unei probleme/situaţii de afaceri descrisă într-un studiu de caz. Soluţiile sunt prezentate în faţa unor specialişti din domeniu care oferă un feed-back relevant studenţilor cu privire la soluţia elaborată.</li>\\r\\n\\t<li class=\\"rtejustify\\"><strong>Proiecte de piaţă</strong>&nbsp;– În cadrul acestor proiecte membrii GTK elaborează o analiză detaliată a unei industrii sau a unui segment de piaţă, şi prezintă proiectul lor în faţa unor profesionişti şi experţi din domeniu. Aceste proiecte sunt coordonate de specialişti din domeniul de afaceri, au o durată mai îndelungată, şi implică mai multe faze de prezentare, evaluare şi îmbunătăţire a proiectului. Obiectivul final constă în elaborarea unei prezentări care să fie apreciată de către specialiştii din domeniu ca fiind una adecvată să fie prezentată şi folosită în mediul real de afaceri. Această evaluare implică şi faptul că prezentarea trebuie să fie de o calitate corespunzătoare, atât din punct de vedere formal, cât şi din punct de vedere al conţinutului, de a fi folosită la întâlniri şi negocieri de afaceri reale (sau altfel pus… ce se află dincolo de studii de caz?).</li>\\r\\n</ul>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Acest program oferă membrilor GTK posibilitatea de a lucra la probleme manageriale reale (bazate pe studii de piaţă) sau apropiate de realitate (bazate pe studii de caz). În cadrul acestor programe principala sarcină a membrilor este de a lua decizii manageriale, de a dezvolta metode şi idei de fundamentare a acestor decizii, şi de a prezenta munca lor în faţa unor specialişti din domeniu. Programele bazate pe studii de caz sunt considerate un training premergător rezolvării problemelor manageriale reale.</p>\\n<ul><li class=\\"rtejustify\\"><strong>Proiecte de studii de caz</strong> – Membrii GTK elaborează o analiză şi o soluţie detaliată a unei probleme/situaţii de afaceri descrisă într-un studiu de caz. Soluţiile sunt prezentate în faţa unor specialişti din domeniu care oferă un feed-back relevant studenţilor cu privire la soluţia elaborată.</li>\\n<li class=\\"rtejustify\\"><strong>Proiecte de piaţă</strong> – În cadrul acestor proiecte membrii GTK elaborează o analiză detaliată a unei industrii sau a unui segment de piaţă, şi prezintă proiectul lor în faţa unor profesionişti şi experţi din domeniu. Aceste proiecte sunt coordonate de specialişti din domeniul de afaceri, au o durată mai îndelungată, şi implică mai multe faze de prezentare, evaluare şi îmbunătăţire a proiectului. Obiectivul final constă în elaborarea unei prezentări care să fie apreciată de către specialiştii din domeniu ca fiind una adecvată să fie prezentată şi folosită în mediul real de afaceri. Această evaluare implică şi faptul că prezentarea trebuie să fie de o calitate corespunzătoare, atât din punct de vedere formal, cât şi din punct de vedere al conţinutului, de a fi folosită la întâlniri şi negocieri de afaceri reale (sau altfel pus… ce se află dincolo de studii de caz?).</li>\\n</ul>",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'663\',
            \'uid\' => \'1\',
            \'filename\' => \'fff.png\',
            \'uri\' => \'public://fff_1.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'2764\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422444686\',
            \'type\' => \'image\',
            \'uuid\' => \'2e1c2cf3-8558-4864-82c2-6bb2c8976a95\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'600\',
              \'height\' => \'400\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'600\',
            \'height\' => \'400\',
          ),
        ),
      ),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'678\',
            \'uid\' => \'3\',
            \'filename\' => \'GTK-babuk.jpg\',
            \'uri\' => \'public://GTK-babuk.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'364576\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422451137\',
            \'type\' => \'image\',
            \'uuid\' => \'b7741d5b-3cee-4163-8e39-5178a3efd245\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'752\',
              \'height\' => \'877\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'752\',
            \'height\' => \'877\',
          ),
        ),
      ),
      \'field_summary\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Acest program oferă membrilor GTK posibilitatea de a lucra la probleme manageriale reale (bazate pe studii de piaţă) sau apropiate de realitate (bazate pe studii de caz).</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Acest program oferă membrilor GTK posibilitatea de a lucra la probleme manageriale reale (bazate pe studii de piaţă) sau apropiate de realitate (bazate pe studii de caz).</p>\\n",
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1423231545\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1182\',
        \'source\' => \'node/1171\',
        \'alias\' => \'management-consulting\',
        \'language\' => \'ro\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Management consulting\',
        \'mlid\' => 0,
        \'plid\' => \'1024\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-48\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => TRUE,
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1167\',
      \'uid\' => \'3\',
      \'title\' => \'Programe de formare profesională\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'641476fc-b614-4fde-af86-db6f02eae58c\',
      \'nid\' => \'1167\',
      \'type\' => \'activity\',
      \'language\' => \'ro\',
      \'created\' => \'1423231262\',
      \'changed\' => \'1423231262\',
      \'tnid\' => \'913\',
      \'translate\' => \'0\',
      \'uuid\' => \'7329c166-5525-4419-af0f-0f32756bb385\',
      \'revision_timestamp\' => \'1423231262\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Cursuri şi seminarii legate de o tematică din domeniul economic sau alte domenii conexe, ţinute de profesionişti recunoscuţi ai domeniului respectiv. Pe lângă acestea, acest program poate include participarea sau contribuţia la organizarea unor programe şi evenimente care corespund profilului profesional al clubului.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Cursuri şi seminarii legate de o tematică din domeniul economic sau alte domenii conexe, ţinute de profesionişti recunoscuţi ai domeniului respectiv. Pe lângă acestea, acest program poate include participarea sau contribuţia la organizarea unor programe şi evenimente care corespund profilului profesional al clubului.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'655\',
            \'uid\' => \'1\',
            \'filename\' => \'fff.png\',
            \'uri\' => \'public://fff.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'2764\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422443674\',
            \'type\' => \'image\',
            \'uuid\' => \'da3d10c0-4e77-4007-8bc5-91ec4d318a80\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'600\',
              \'height\' => \'400\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'600\',
            \'height\' => \'400\',
          ),
        ),
      ),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'680\',
            \'uid\' => \'3\',
            \'filename\' => \'GTK-babuk.jpg\',
            \'uri\' => \'public://GTK-babuk_1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'364576\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422451465\',
            \'type\' => \'image\',
            \'uuid\' => \'6b035b97-51cb-4c1e-ac19-3fac87c60408\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'752\',
              \'height\' => \'877\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'752\',
            \'height\' => \'877\',
          ),
        ),
      ),
      \'field_summary\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Cursuri şi seminarii legate de o tematică din domeniul economic sau alte domenii conexe, ţinute de profesionişti recunoscuţi ai domeniului respectiv.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Cursuri şi seminarii legate de o tematică din domeniul economic sau alte domenii conexe, ţinute de profesionişti recunoscuţi ai domeniului respectiv.</p>\\n",
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1423231262\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1178\',
        \'source\' => \'node/1167\',
        \'alias\' => \'programe-de-formare-profesională\',
        \'language\' => \'ro\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Formare profesională\',
        \'mlid\' => 0,
        \'plid\' => \'1024\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-50\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => TRUE,
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'916\',
      \'uid\' => \'1\',
      \'title\' => \'Rendezvények\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7d5cded2-b721-4f39-b34f-17ba533e899a\',
      \'nid\' => \'916\',
      \'type\' => \'activity\',
      \'language\' => \'hu\',
      \'created\' => \'1422444727\',
      \'changed\' => \'1423231980\',
      \'tnid\' => \'916\',
      \'translate\' => \'0\',
      \'uuid\' => \'792e48eb-c4d1-44dd-85ed-a9db0f746a57\',
      \'revision_timestamp\' => \'1423231980\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Esetenként a szakkollégium természetéhez közel álló egyetemi vagy ehhez kapcsolódó szervezésű rendezvényeken való részvétel vagy akár ezek szervezéséhez való hozzájárulás is lehetséges, anélkül, hogy a fókusz erre helyeződne vagy alapprogramként lehetne számítani ilyen tevékenységre.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Esetenként a szakkollégium természetéhez közel álló egyetemi vagy ehhez kapcsolódó szervezésű rendezvényeken való részvétel vagy akár ezek szervezéséhez való hozzájárulás is lehetséges, anélkül, hogy a fókusz erre helyeződne vagy alapprogramként lehetne számítani ilyen tevékenységre.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'664\',
            \'uid\' => \'1\',
            \'filename\' => \'fff.png\',
            \'uri\' => \'public://fff_2.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'2764\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422444727\',
            \'type\' => \'image\',
            \'uuid\' => \'b4c9d85a-b8d9-4670-bd61-a5ef5466f7c6\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'600\',
              \'height\' => \'400\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'600\',
            \'height\' => \'400\',
          ),
        ),
      ),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1006\',
            \'uid\' => \'3\',
            \'filename\' => \'GTK-babuk.jpg\',
            \'uri\' => \'public://GTK-babuk_2.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'364576\',
            \'status\' => \'1\',
            \'timestamp\' => \'1423231980\',
            \'type\' => \'image\',
            \'uuid\' => \'6c1a8c3b-a67d-4038-8379-f2cf5aeed27e\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'752\',
              \'height\' => \'877\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'752\',
            \'height\' => \'877\',
          ),
        ),
      ),
      \'field_summary\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Esetenként a szakkollégium természetéhez közel álló egyetemi vagy ehhez kapcsolódó szervezésű rendezvényeken való részvétel vagy akár ezek szervezéséhez való hozzájárulás is lehetséges, anélkül, hogy a fókusz erre helyeződne vagy alapprogramként lehetne számítani ilyen tevékenységre.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Esetenként a szakkollégium természetéhez közel álló egyetemi vagy ehhez kapcsolódó szervezésű rendezvényeken való részvétel vagy akár ezek szervezéséhez való hozzájárulás is lehetséges, anélkül, hogy a fókusz erre helyeződne vagy alapprogramként lehetne számítani ilyen tevékenységre.</p>\\n",
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1422444727\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'927\',
        \'source\' => \'node/916\',
        \'alias\' => \'rendezvények\',
        \'language\' => \'hu\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Rendezvények\',
        \'mlid\' => 0,
        \'plid\' => \'835\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-46\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1169\',
      \'uid\' => \'3\',
      \'title\' => \'Management shadowing\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d5ac2324-d654-4356-93f0-a70c4a2eef4b\',
      \'nid\' => \'1169\',
      \'type\' => \'activity\',
      \'language\' => \'en\',
      \'created\' => \'1423231372\',
      \'changed\' => \'1423231372\',
      \'tnid\' => \'914\',
      \'translate\' => \'0\',
      \'uuid\' => \'87be974e-fc17-4b26-982b-0374bae1ecb5\',
      \'revision_timestamp\' => \'1423231372\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>One day spent by the side of a manager at work. The GTK - Business Consulting Club offers for its members the possibility of meeting successful businessmen and managers, enabling personal or closed-circle discussions between them. This program also includes the possibility of participating on meetings and negotiations, where the BCC member acts as a partner and a “shadow” of the manager, and is able to observe the applied methods and techniques.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>One day spent by the side of a manager at work. The GTK - Business Consulting Club offers for its members the possibility of meeting successful businessmen and managers, enabling personal or closed-circle discussions between them. This program also includes the possibility of participating on meetings and negotiations, where the BCC member acts as a partner and a “shadow” of the manager, and is able to observe the applied methods and techniques.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'662\',
            \'uid\' => \'1\',
            \'filename\' => \'fff.png\',
            \'uri\' => \'public://fff_0.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'2764\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422444589\',
            \'type\' => \'image\',
            \'uuid\' => \'35f14bbc-e9b2-4370-9722-55219cd7276c\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'600\',
              \'height\' => \'400\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'600\',
            \'height\' => \'400\',
          ),
        ),
      ),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'679\',
            \'uid\' => \'3\',
            \'filename\' => \'GTK-babuk.jpg\',
            \'uri\' => \'public://GTK-babuk_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'364576\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422451371\',
            \'type\' => \'image\',
            \'uuid\' => \'5aef084c-757c-4c6a-9d28-e4cf0577cde7\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'752\',
              \'height\' => \'877\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'752\',
            \'height\' => \'877\',
          ),
        ),
      ),
      \'field_summary\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">One day spent by the side of a manager at work.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">One day spent by the side of a manager at work.</p>\\n",
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1423231372\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1180\',
        \'source\' => \'node/1169\',
        \'alias\' => \'management-shadowing\',
        \'language\' => \'en\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Management Shadowing\',
        \'mlid\' => 0,
        \'plid\' => \'1025\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-49\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => TRUE,
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'914\',
      \'uid\' => \'1\',
      \'title\' => \'Menedzsment shadowing\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b43c9618-f0d4-4826-be57-13e67149221a\',
      \'nid\' => \'914\',
      \'type\' => \'activity\',
      \'language\' => \'hu\',
      \'created\' => \'1422444589\',
      \'changed\' => \'1422451371\',
      \'tnid\' => \'914\',
      \'translate\' => \'0\',
      \'uuid\' => \'9359858e-39e5-4442-9b07-671acda14438\',
      \'revision_timestamp\' => \'1422451371\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Munkanap egy menedzser mellett. Lehetőséget biztosítunk sikeres vállalati vezetőkkel és szakemberekkel való találkozásokra, személyes, illetve szűk körben szervezett beszélgetésekre. Mindezen túl a program kiterjed olyan találkozókon, tárgyalásokon való részvételre, ahol a gyakorlati szakember vagy menedzser “árnyéka”-ként és partnereként a GTK-s diák jelen lehet és megfigyelheti a menedzser által alkalmazott módszereket, technikákat.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Munkanap egy menedzser mellett. Lehetőséget biztosítunk sikeres vállalati vezetőkkel és szakemberekkel való találkozásokra, személyes, illetve szűk körben szervezett beszélgetésekre. Mindezen túl a program kiterjed olyan találkozókon, tárgyalásokon való részvételre, ahol a gyakorlati szakember vagy menedzser “árnyéka”-ként és partnereként a GTK-s diák jelen lehet és megfigyelheti a menedzser által alkalmazott módszereket, technikákat.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'662\',
            \'uid\' => \'1\',
            \'filename\' => \'fff.png\',
            \'uri\' => \'public://fff_0.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'2764\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422444589\',
            \'type\' => \'image\',
            \'uuid\' => \'35f14bbc-e9b2-4370-9722-55219cd7276c\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'600\',
              \'height\' => \'400\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'600\',
            \'height\' => \'400\',
          ),
        ),
      ),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'679\',
            \'uid\' => \'3\',
            \'filename\' => \'GTK-babuk.jpg\',
            \'uri\' => \'public://GTK-babuk_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'364576\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422451371\',
            \'type\' => \'image\',
            \'uuid\' => \'5aef084c-757c-4c6a-9d28-e4cf0577cde7\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'752\',
              \'height\' => \'877\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'752\',
            \'height\' => \'877\',
          ),
        ),
      ),
      \'field_summary\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Munkanap egy menedzser mellett. Lehetőséget biztosítunk sikeres vállalati vezetőkkel és szakemberekkel való találkozásokra, személyes, illetve szűk körben szervezett beszélgetésekre.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Munkanap egy menedzser mellett. Lehetőséget biztosítunk sikeres vállalati vezetőkkel és szakemberekkel való találkozásokra, személyes, illetve szűk körben szervezett beszélgetésekre.</p>\\n",
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1422444589\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'925\',
        \'source\' => \'node/914\',
        \'alias\' => \'menedzsment-shadowing\',
        \'language\' => \'hu\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Menedzsment shadowing\',
        \'mlid\' => 0,
        \'plid\' => \'835\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-49\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'913\',
      \'uid\' => \'1\',
      \'title\' => \'Szakmai képzések\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f0a7fa14-9f28-439f-ae4e-71949c80b9d4\',
      \'nid\' => \'913\',
      \'type\' => \'activity\',
      \'language\' => \'hu\',
      \'created\' => \'1422443674\',
      \'changed\' => \'1422451465\',
      \'tnid\' => \'913\',
      \'translate\' => \'0\',
      \'uuid\' => \'97d6158d-bd03-4a4f-9576-427ec6ac115f\',
      \'revision_timestamp\' => \'1422451465\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Egy-egy gazdasági témát vagy ahhoz szorosan kapcsolódó területet feldolgozó szakmai előadások és szemináriumok, amelyeket az adott szakterület elismert képviselői valamint gyakorló szakemberei tartanak meg a szakkollégium tagjainak.&nbsp;A meghívott előadók mindig hasznos információkkal gazdagították a GTK-sok tudását, látókörét, akár konkrét projektben való segítségnyújtással vagy gyakorlati képzésekkel. Ami nagyszerű lehetőség a leadership program keretén belül, hogy angol nyelvű előadásokat hallgathattak a diákok így fejlesztve a nyelvtudásukat is.&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Egy-egy gazdasági témát vagy ahhoz szorosan kapcsolódó területet feldolgozó szakmai előadások és szemináriumok, amelyeket az adott szakterület elismert képviselői valamint gyakorló szakemberei tartanak meg a szakkollégium tagjainak. A meghívott előadók mindig hasznos információkkal gazdagították a GTK-sok tudását, látókörét, akár konkrét projektben való segítségnyújtással vagy gyakorlati képzésekkel. Ami nagyszerű lehetőség a leadership program keretén belül, hogy angol nyelvű előadásokat hallgathattak a diákok így fejlesztve a nyelvtudásukat is. </p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'655\',
            \'uid\' => \'1\',
            \'filename\' => \'fff.png\',
            \'uri\' => \'public://fff.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'2764\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422443674\',
            \'type\' => \'image\',
            \'uuid\' => \'da3d10c0-4e77-4007-8bc5-91ec4d318a80\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'600\',
              \'height\' => \'400\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'600\',
            \'height\' => \'400\',
          ),
        ),
      ),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'680\',
            \'uid\' => \'3\',
            \'filename\' => \'GTK-babuk.jpg\',
            \'uri\' => \'public://GTK-babuk_1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'364576\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422451465\',
            \'type\' => \'image\',
            \'uuid\' => \'6b035b97-51cb-4c1e-ac19-3fac87c60408\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'752\',
              \'height\' => \'877\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'752\',
            \'height\' => \'877\',
          ),
        ),
      ),
      \'field_summary\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Egy-egy gazdasági témát vagy ahhoz szorosan kapcsolódó területet feldolgozó szakmai előadások és szemináriumok, amelyeket az adott szakterület elismert képviselői valamint gyakorló szakemberei tartanak meg a szakkollégium tagjainak.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Egy-egy gazdasági témát vagy ahhoz szorosan kapcsolódó területet feldolgozó szakmai előadások és szemináriumok, amelyeket az adott szakterület elismert képviselői valamint gyakorló szakemberei tartanak meg a szakkollégium tagjainak.</p>\\n",
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1422443674\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'924\',
        \'source\' => \'node/913\',
        \'alias\' => \'szakmai-képzések\',
        \'language\' => \'hu\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Szakmai képzések\',
        \'mlid\' => 0,
        \'plid\' => \'835\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-50\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1166\',
      \'uid\' => \'3\',
      \'title\' => \'Professional trainings/events\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'57e40802-b596-403b-8ea0-ee42f57d622e\',
      \'nid\' => \'1166\',
      \'type\' => \'activity\',
      \'language\' => \'en\',
      \'created\' => \'1423231221\',
      \'changed\' => \'1423231221\',
      \'tnid\' => \'913\',
      \'translate\' => \'0\',
      \'uuid\' => \'9fa2051d-9524-40a2-998a-8408c0e1fc90\',
      \'revision_timestamp\' => \'1423231221\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Courses and seminars connected to a specific business topic or to other closely related domains, held by recognized professionals. Beside these events the participation on or contribution to the organization of programs that are related to the profile of the club can also be part of the program.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Courses and seminars connected to a specific business topic or to other closely related domains, held by recognized professionals. Beside these events the participation on or contribution to the organization of programs that are related to the profile of the club can also be part of the program.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'655\',
            \'uid\' => \'1\',
            \'filename\' => \'fff.png\',
            \'uri\' => \'public://fff.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'2764\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422443674\',
            \'type\' => \'image\',
            \'uuid\' => \'da3d10c0-4e77-4007-8bc5-91ec4d318a80\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'600\',
              \'height\' => \'400\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'600\',
            \'height\' => \'400\',
          ),
        ),
      ),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'680\',
            \'uid\' => \'3\',
            \'filename\' => \'GTK-babuk.jpg\',
            \'uri\' => \'public://GTK-babuk_1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'364576\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422451465\',
            \'type\' => \'image\',
            \'uuid\' => \'6b035b97-51cb-4c1e-ac19-3fac87c60408\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'752\',
              \'height\' => \'877\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'752\',
            \'height\' => \'877\',
          ),
        ),
      ),
      \'field_summary\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Courses and seminars connected to a specific business topic or to other closely related domains, held by recognized professionals.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Courses and seminars connected to a specific business topic or to other closely related domains, held by recognized professionals.</p>\\n",
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1423231221\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1177\',
        \'source\' => \'node/1166\',
        \'alias\' => \'professional-trainingsevents\',
        \'language\' => \'en\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Professional Training\',
        \'mlid\' => 0,
        \'plid\' => \'1025\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-50\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => TRUE,
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'915\',
      \'uid\' => \'1\',
      \'title\' => \'Esettanulmány oldás\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ae6e99d4-bf93-4f1b-a31a-6c7d0b9237ce\',
      \'nid\' => \'915\',
      \'type\' => \'activity\',
      \'language\' => \'hu\',
      \'created\' => \'1422444686\',
      \'changed\' => \'1424945934\',
      \'tnid\' => \'915\',
      \'translate\' => \'0\',
      \'uuid\' => \'a5cb631b-2ead-44d0-b149-cd0649070bfc\',
      \'revision_timestamp\' => \'1424945934\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rteindent1 rtejustify\\">Olyan gyakorlathoz közel álló (esettanulmány jellegű) menedzsment problémákkal találkozhatnak a GTK tagok, melyek során valós vállalati döntések meghozatalára, módszertani és strukturált megalapozására valamint ezek prezentálására készülnek fel. Az esettanulmány jellegű feladatok a piaci jellegű feladatok „előszobájának” tekinthetők.</p>\\r\\n\\r\\n<p class=\\"rteindent1 rtejustify\\"><strong>Az esettanulmány jellegű feladatok, </strong>egy részletesen leírt döntési szituáció elemzéséhez, megoldásához és ezek egyszeri prezentálásához, valamint észrevételezéséhez kapcsolódik. Általában tanári koordinációval működik és egy belső szakmai zsűri értékeli a megoldásokat.</p>\\r\\n\\r\\n<p class=\\"rteindent2 rtejustify\\">&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rteindent1 rtejustify\\">Olyan gyakorlathoz közel álló (esettanulmány jellegű) menedzsment problémákkal találkozhatnak a GTK tagok, melyek során valós vállalati döntések meghozatalára, módszertani és strukturált megalapozására valamint ezek prezentálására készülnek fel. Az esettanulmány jellegű feladatok a piaci jellegű feladatok „előszobájának” tekinthetők.</p>\\n<p class=\\"rteindent1 rtejustify\\"><strong>Az esettanulmány jellegű feladatok, </strong>egy részletesen leírt döntési szituáció elemzéséhez, megoldásához és ezek egyszeri prezentálásához, valamint észrevételezéséhez kapcsolódik. Általában tanári koordinációval működik és egy belső szakmai zsűri értékeli a megoldásokat.</p>\\n<p class=\\"rteindent2 rtejustify\\"> </p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'663\',
            \'uid\' => \'1\',
            \'filename\' => \'fff.png\',
            \'uri\' => \'public://fff_1.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'2764\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422444686\',
            \'type\' => \'image\',
            \'uuid\' => \'2e1c2cf3-8558-4864-82c2-6bb2c8976a95\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'600\',
              \'height\' => \'400\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'600\',
            \'height\' => \'400\',
          ),
        ),
      ),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'678\',
            \'uid\' => \'3\',
            \'filename\' => \'GTK-babuk.jpg\',
            \'uri\' => \'public://GTK-babuk.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'364576\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422451137\',
            \'type\' => \'image\',
            \'uuid\' => \'b7741d5b-3cee-4163-8e39-5178a3efd245\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'752\',
              \'height\' => \'877\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'752\',
            \'height\' => \'877\',
          ),
        ),
      ),
      \'field_summary\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Piaci jellegű menedzsment problémákkal találkozhatnak a GTK tagok, melyek során valós vállalati döntések meghozatalára, módszertani és strukturált megalapozására valamint ezek prezentálására készülnek fel.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Piaci jellegű menedzsment problémákkal találkozhatnak a GTK tagok, melyek során valós vállalati döntések meghozatalára, módszertani és strukturált megalapozására valamint ezek prezentálására készülnek fel.</p>\\n",
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1422444686\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'926\',
        \'source\' => \'node/915\',
        \'alias\' => \'esettanulmány-oldás\',
        \'language\' => \'hu\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Esettanulmány oldás\',
        \'mlid\' => 0,
        \'plid\' => \'835\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-48\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1170\',
      \'uid\' => \'3\',
      \'title\' => \'Management consulting\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b72635ee-25af-4119-a119-ef24b720fa12\',
      \'nid\' => \'1170\',
      \'type\' => \'activity\',
      \'language\' => \'en\',
      \'created\' => \'1423231494\',
      \'changed\' => \'1423231494\',
      \'tnid\' => \'915\',
      \'translate\' => \'0\',
      \'uuid\' => \'d563d834-b3f6-4beb-98be-aa58332d3bc0\',
      \'revision_timestamp\' => \'1423231494\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">This program offers GTK members the possibility of working on real (market based) or close-to-reality (case study based) management problems. During these programs members have to make managerial decisions, develop methods and ideas to support these decisions, and present their work in front of professionals. Case study based programs are considered as preparation for solving real business problems.</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li class=\\"rtejustify\\"><strong>Case study based projects</strong>&nbsp;– Members provide a detailed analysis and solution to a precisely described business situation, and present it in front of professionals to receive relevant feed-back regarding their work.</li>\\r\\n\\t<li class=\\"rtejustify\\"><strong>Market based projects</strong>&nbsp;– During these projects members of the GTK provide a detailed analysis of a certain industry or market segment, and present their work and conclusions in front of professionals and experts in the subject. These projects are coordinated by business professionals, have a longer lifetime, and include several incremental stages of presentation, evaluation and improvement. The final objective is the development of a presentation which is judged by a manager as professional enough to be presented and used in business reality. This evaluation involves that the presentation should be suitable, both from formal and content perspective, to be used on real business meetings and negotiations (or else put… what is beyond case studies?).</li>\\r\\n</ul>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">This program offers GTK members the possibility of working on real (market based) or close-to-reality (case study based) management problems. During these programs members have to make managerial decisions, develop methods and ideas to support these decisions, and present their work in front of professionals. Case study based programs are considered as preparation for solving real business problems.</p>\\n<ul><li class=\\"rtejustify\\"><strong>Case study based projects</strong> – Members provide a detailed analysis and solution to a precisely described business situation, and present it in front of professionals to receive relevant feed-back regarding their work.</li>\\n<li class=\\"rtejustify\\"><strong>Market based projects</strong> – During these projects members of the GTK provide a detailed analysis of a certain industry or market segment, and present their work and conclusions in front of professionals and experts in the subject. These projects are coordinated by business professionals, have a longer lifetime, and include several incremental stages of presentation, evaluation and improvement. The final objective is the development of a presentation which is judged by a manager as professional enough to be presented and used in business reality. This evaluation involves that the presentation should be suitable, both from formal and content perspective, to be used on real business meetings and negotiations (or else put… what is beyond case studies?).</li>\\n</ul>",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'663\',
            \'uid\' => \'1\',
            \'filename\' => \'fff.png\',
            \'uri\' => \'public://fff_1.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'2764\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422444686\',
            \'type\' => \'image\',
            \'uuid\' => \'2e1c2cf3-8558-4864-82c2-6bb2c8976a95\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'600\',
              \'height\' => \'400\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'600\',
            \'height\' => \'400\',
          ),
        ),
      ),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'678\',
            \'uid\' => \'3\',
            \'filename\' => \'GTK-babuk.jpg\',
            \'uri\' => \'public://GTK-babuk.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'364576\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422451137\',
            \'type\' => \'image\',
            \'uuid\' => \'b7741d5b-3cee-4163-8e39-5178a3efd245\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'752\',
              \'height\' => \'877\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'752\',
            \'height\' => \'877\',
          ),
        ),
      ),
      \'field_summary\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">This program offers GTK&nbsp;members the possibility of working on real (market based) or close-to-reality (case study based) management problems.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">This program offers GTK members the possibility of working on real (market based) or close-to-reality (case study based) management problems.</p>\\n",
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1423231494\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1181\',
        \'source\' => \'node/1170\',
        \'alias\' => \'management-consulting\',
        \'language\' => \'en\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Management consulting\',
        \'mlid\' => 0,
        \'plid\' => \'1025\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-48\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => TRUE,
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1168\',
      \'uid\' => \'3\',
      \'title\' => \'Management shadowing\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f6d9d72b-0a64-4274-ad63-476c198aebef\',
      \'nid\' => \'1168\',
      \'type\' => \'activity\',
      \'language\' => \'ro\',
      \'created\' => \'1423231327\',
      \'changed\' => \'1423231327\',
      \'tnid\' => \'914\',
      \'translate\' => \'0\',
      \'uuid\' => \'e1dde0f6-a3b0-4f82-92ad-6d97a12bda2e\',
      \'revision_timestamp\' => \'1423231327\',
      \'revision_uid\' => \'3\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>O zi petrecută alături de un manager. GTK oferă membrilor săi posibilitatea de a întâlni întreprinzători şi manageri de succes, iniţiind astfel discuţii individuale sau în cerc restrâns între membrii GTK şi specialişti recunoscuţi din mediul de afaceri. Acest program include şi posibilitatea de a participa la întâlniri şi dezbateri, unde membrii GTK joacă un rol de partener sau de „umbră” a managerului, având posibilitatea de a observa tehnicile şi metodele de negociere aplicate.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>O zi petrecută alături de un manager. GTK oferă membrilor săi posibilitatea de a întâlni întreprinzători şi manageri de succes, iniţiind astfel discuţii individuale sau în cerc restrâns între membrii GTK şi specialişti recunoscuţi din mediul de afaceri. Acest program include şi posibilitatea de a participa la întâlniri şi dezbateri, unde membrii GTK joacă un rol de partener sau de „umbră” a managerului, având posibilitatea de a observa tehnicile şi metodele de negociere aplicate.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'662\',
            \'uid\' => \'1\',
            \'filename\' => \'fff.png\',
            \'uri\' => \'public://fff_0.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'2764\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422444589\',
            \'type\' => \'image\',
            \'uuid\' => \'35f14bbc-e9b2-4370-9722-55219cd7276c\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'600\',
              \'height\' => \'400\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'600\',
            \'height\' => \'400\',
          ),
        ),
      ),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'679\',
            \'uid\' => \'3\',
            \'filename\' => \'GTK-babuk.jpg\',
            \'uri\' => \'public://GTK-babuk_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'364576\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422451371\',
            \'type\' => \'image\',
            \'uuid\' => \'5aef084c-757c-4c6a-9d28-e4cf0577cde7\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'752\',
              \'height\' => \'877\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'752\',
            \'height\' => \'877\',
          ),
        ),
      ),
      \'field_summary\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">O zi petrecută alături de un manager.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">O zi petrecută alături de un manager.</p>\\n",
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1423231327\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1179\',
        \'source\' => \'node/1168\',
        \'alias\' => \'management-shadowing\',
        \'language\' => \'ro\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Management shadowing\',
        \'mlid\' => 0,
        \'plid\' => \'1024\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-49\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => TRUE,
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
